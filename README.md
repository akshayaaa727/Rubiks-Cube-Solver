# Rubik's Cube Solver using Korf's IDA* Algorithm

A high-performance Rubik's Cube solver implemented in **C++**, featuring multiple cube representations, graph search algorithms, heuristic search, and a Corner Pattern Database for efficient optimal solving.

---

## Features

- Multiple Rubik's Cube representations
  - 3D Array
  - 1D Array
  - Bitboard Representation
- Complete implementation of all 18 cube moves
- Random cube scrambling
- Generic solver framework using C++ templates
- Corner Pattern Database with Nibble Array compression
- Memory-optimized heuristic storage
- Optimal and informed search algorithms

---

## Algorithms Implemented

### Graph Search
- Depth First Search (DFS)
- Breadth First Search (BFS)
- Iterative Deepening DFS (IDDFS)

### Heuristic Search
- A* Search
- Korf's Iterative Deepening A* (IDA*)

### Pattern Database
- Corner Pattern Database
- Permutation Indexing
- Nibble Array (4-bit compressed storage)

---

## Data Structures Used

- Queue
- Stack (implicit recursion)
- Priority Queue
- Unordered Map
- Vector
- Bit Manipulation
- Templates
- Custom Hash Functions

---

## Project Structure

```
Rubiks-Cube-Solver
│
├── Model
│   ├── RubiksCube
│   ├── RubiksCube3dArray
│   ├── RubiksCube1dArray
│   └── RubiksCubeBitboard
│
├── Solver
│   ├── DFSSolver
│   ├── BFSSolver
│   ├── IDDFSSolver
│   └── IDAstarSolver
│
├── PatternDatabases
│   ├── NibbleArray
│   ├── PatternDatabase
│   ├── CornerPatternDatabase
│   ├── CornerDBMaker
│   └── PermutationIndexer
│
├── main.cpp
└── CMakeLists.txt
```

---

## Performance Optimizations

- Bitboard cube representation for faster state manipulation
- Custom hash functions for efficient state lookup
- Generic template-based solver supporting multiple cube representations
- Nibble Array reducing heuristic storage by **50% (84 MB → 42 MB)**
- Corner Pattern Database significantly reducing the IDA* search space

---

## Technologies

- C++20
- STL
- CMake
- Object-Oriented Programming
- Templates
- Bit Manipulation
- Graph Algorithms

---

## Building the Project


Build

```bash
mkdir build
cd build
cmake ..
make
```

Run

```bash
./RubiksCubeSolver
```

---

## Sample Output

```
Shuffled Cube:

Rubik's Cube:

       W W B
       W W R
       G G R

R R Y  R R B  W B O  W G G
G G Y  R R B  W B O  W O O
G G O  Y Y Y  R B O  W O O

       B B B
       Y Y O
       Y Y G

Solution Length: 3

F' R' U'

Cube after applying solution:

Rubik's Cube:

       W W W
       W W W
       W W W

G G G  R R R  B B B  O O O
G G G  R R R  B B B  O O O
G G G  R R R  B B B  O O O

       Y Y Y
       Y Y Y
       Y Y Y

Solved? 1
```

---

## Concepts Demonstrated

- Object-Oriented Programming
- Generic Programming with Templates
- Graph Search Algorithms
- Heuristic Search
- Pattern Databases
- State Space Search
- Hashing
- Memory Optimization
- Bit Manipulation
- Algorithm Design

---

## Future Improvements

- Full Corner Pattern Database generation
- Edge Pattern Database
- Two-Phase Solver (Kociemba Algorithm)
- Parallel database generation
- Interactive GUI visualization
- Benchmarking of different cube representations

---

## Author

**Akshaya Tirupathi**

Indian Institute of Technology Kharagpur

GitHub: https://github.com/akshayaaa727
