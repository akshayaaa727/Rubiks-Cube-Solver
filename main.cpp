#include "Model/RubiksCube.h"
#include "Model/RubiksCube3dArray.cpp"
#include "Solver/BFSSolver.h"
#include "Solver/IDAstarSolver.h"
#include "PatternDatabases/CornerDBMaker.h"
int main() {

    RubiksCube3dArray cube;

    cube.randomShuffleCube(10);

    IDAstarSolver<RubiksCube3dArray, Hash3d> solver(cube, "corner.db");

    auto ans = solver.solve();

    cout << "Moves: " << ans.size() << endl;

    for (auto move : ans)
        cube.move(move);

    cout << "Solved? " << cube.isSolved() << endl;
    return 0;
}