#include "Solver.h"
#include <climits>
#include <algorithm>

using namespace std;

Solver::Solver(Cube start) : initial(start) {}

int Solver::heuristic(const Cube& cube) {
    string s = cube.serialize();
    int mismatch = 0;
    for (int i = 0; i < s.size(); i += 9) {
        char ref = s[i];
        for (int j = i; j < i + 9; ++j)
            if (s[j] != ref) ++mismatch;
    }
    return mismatch;
}

bool Solver::dfs(Cube& cube, int g, int threshold, int& next_threshold) {
    int f = g + heuristic(cube);
    if (f > threshold) {
        next_threshold = min(next_threshold, f);
        return false;
    }
    if (cube.is_solved()) return true;

    for (auto move : cube.get_valid_moves()) {
        cube.apply_move(move);
        path.push_back(move);
        if (dfs(cube, g + 1, threshold, next_threshold)) return true;
        path.pop_back();
        cube.undo_move(move);
    }
    return false;
}

vector<string> Solver::ida_star() {
    int threshold = heuristic(initial);
    while (true) {
        int next_threshold = INT_MAX;
        Cube copy = initial;
        if (dfs(copy, 0, threshold, next_threshold)) return path;
        if (next_threshold == INT_MAX) break;
        threshold = next_threshold;
    }
    return {};
}