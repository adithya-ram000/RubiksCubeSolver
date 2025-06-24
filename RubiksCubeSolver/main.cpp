#include <bits/stdc++.h>
using namespace std;

#include "Cube.h"
#include "Solver.h"

int main() {
    cout << "Rubik's Cube Solver (3x3) using C++" << endl;

    Cube cube;
    cube.scramble(13);  // scramble the cube with 13 random moves
    cube.print();

    cout << "\nSolving using IDA*...\n";
    Solver solver(cube);
    vector<string> solution = solver.ida_star();

    cout << "Solution in " << solution.size() << " moves:\n";
    for (string move : solution) cout << move << " ";
    cout << "\n";

    return 0;
}