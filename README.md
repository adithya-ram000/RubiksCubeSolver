# Rubik’s Cube Solver (3x3) using C++

This project implements a 3x3 Rubik’s Cube Solver using multiple search techniques, including Korf’s IDA* algorithm. It is written in modern C++ and designed with object-oriented principles.

## 🔧 Features

- **C++ Implementation** with modular design
- **Algorithms Supported**:
  - Breadth-First Search (BFS)
  - Depth-First Search (DFS)
  - Iterative Deepening DFS (IDDFS)
  - Iterative Deepening A\* (IDA*) – Korf's Algorithm
- **Efficient State Representation** using serialized strings
- **Optimized Space** with nibble array concept (planned)
- **Solves scrambles up to 13 moves** with IDA*

## 📦 File Structure

```
RubiksCubeSolver/
├── main.cpp         # Runs the cube and solver
├── Cube.h / .cpp    # Rubik's Cube representation
├── Solver.h / .cpp  # Solver implementing IDA*
```

## 🚀 How to Build and Run

### 🔨 Compile (using g++)
```bash
g++ main.cpp Cube.cpp Solver.cpp -o cube_solver
```

### ▶️ Run
```bash
./cube_solver
```

The program scrambles the cube with 13 random moves and solves it using IDA*.

## 🧠 Sample Output

```
Rubik's Cube Solver (3x3) using C++
W W W R R R ...
... scrambled state ...

Solving using IDA*...
Solution in 18 moves:
U R' F2 L D' ...
```

## 📁 Project Status

- ✅ Basic solver structure working
- ⏳ Real cube move logic is currently placeholder (for demonstration)

## 🤝 Contributions

Feel free to fork and contribute advanced move logic or visualizer.

---

## 🌐 Author

**Adithya Ram**  
[GitHub Profile](https://github.com/adithya-ram000)

---

> Built as a self project under AlgoZenith guidance | June 2025
