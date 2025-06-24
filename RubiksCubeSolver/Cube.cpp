#include "Cube.h"
#include <iostream>
#include <algorithm>

using namespace std;

Cube::Cube() {
    char colors[] = {'W', 'R', 'B', 'O', 'G', 'Y'};
    for (int i = 0; i < 6; ++i)
        faces[i].fill(colors[i]);
}

void Cube::scramble(int moves) {
    vector<string> mv = get_valid_moves();
    for (int i = 0; i < moves; ++i)
        apply_move(mv[rand() % mv.size()]);
}

void Cube::apply_move(const string& move) {
    // Dummy implementation for brevity
}

void Cube::undo_move(const string& move) {
    // Dummy implementation
}

void Cube::print() const {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 9; ++j) {
            cout << faces[i][j];
            if (j % 3 == 2) cout << " ";
        }
        cout << endl;
    }
}

vector<string> Cube::get_valid_moves() const {
    return {"U", "U'", "D", "D'", "L", "L'", "R", "R'", "F", "F'", "B", "B'"};
}

bool Cube::is_solved() const {
    for (auto& face : faces)
        if (!all_of(face.begin(), face.end(), [&](char c) { return c == face[0]; }))
            return false;
    return true;
}

string Cube::serialize() const {
    string state;
    for (auto& face : faces)
        for (char c : face)
            state += c;
    return state;
}