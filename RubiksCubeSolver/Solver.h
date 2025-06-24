#ifndef SOLVER_H
#define SOLVER_H

#include "Cube.h"
#include <vector>
#include <string>

class Solver {
public:
    Solver(Cube start);
    std::vector<std::string> ida_star();
private:
    Cube initial;
    std::vector<std::string> path;
    bool dfs(Cube& cube, int g, int threshold, int& next_threshold);
    int heuristic(const Cube& cube);
};

#endif