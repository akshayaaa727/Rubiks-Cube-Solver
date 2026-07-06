//
// Created by Akshaya Tirupathi on 24/05/26.
//

#ifndef RUBIKSCUBESOLVER_IDDFSSOLVER_H
#define RUBIKSCUBESOLVER_IDDFSSOLVER_H

#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <algorithm>
#include <cstdint>
//

using namespace std;

template<typename T, typename H>
class IDDFSSolver {

private:
    int max_search_depth;
    vector<RubiksCube::MOVE> moves;

public:
    T rubiksCube;

    IDDFSSolver(T _rubiksCube, int _max_search_depth = 7) {
        rubiksCube = _rubiksCube;
        max_search_depth = _max_search_depth;
    }

    //    Used DFSSolver with increasing max_search_depth
    vector<RubiksCube::MOVE> solve() {
        for (int i = 1; i <= max_search_depth; i++) {
            DFSSolver<T, H> dfsSolver(rubiksCube, i);
            moves = dfsSolver.solve();
            if (dfsSolver.rubiksCube.isSolved()) {
                rubiksCube = dfsSolver.rubiksCube;
                break;
            }
        }
        return moves;
    }


};

#endif //RUBIKS_CUBE_SOLVER_IDDFSSOLVER_H