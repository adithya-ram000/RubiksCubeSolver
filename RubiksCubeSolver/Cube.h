#ifndef CUBE_H
#define CUBE_H

#include <vector>
#include <string>
#include <array>

class Cube {
public:
    Cube();
    void scramble(int moves);
    void apply_move(const std::string& move);
    void undo_move(const std::string& move);
    void print() const;
    std::vector<std::string> get_valid_moves() const;
    bool is_solved() const;
    std::string serialize() const;

private:
    std::array<std::array<char, 9>, 6> faces;
    void rotate_face(int face);
};

#endif