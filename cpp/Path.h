//
// Created by Eric on 2018/10/23.
//

#ifndef MAZING_PATH_H
#define MAZING_PATH_H

#include <iostream>
#include "Mazing.h"

using namespace std;

enum Dir {
    E = 0,
    SE = 1,
    S = 2,
    SW = 3,
    W = 4,
    NW = 5,
    N = 6,
    NE = 7,
};

class Path {
public:
    Path(int x, int y, Dir source) {
        pos[0] = x;
        pos[1] = y;
        dir = source;

        cout << "Current Pos " << y << " " << x << endl;
    }

    int *getPos() {
        return pos;
    }

    void nextRoad() {

        // E
        check(pos[0] + 1, pos[1], W);
        // SE
        check(pos[0] + 1, pos[1] + 1, NW);
        // S
        check(pos[0], pos[1] + 1, N);
        // SW
        check(pos[0] - 1, pos[1] + 1, NE);
        // W
        check(pos[0] - 1, pos[1], E);
        // NW
        check(pos[0] - 1, pos[1] - 1, SE);
        // N
        check(pos[0], pos[1] - 1, S);
        // NE
        check(pos[0] + 1, pos[1] - 1, SW);

        cout << "Back" << endl;

    }

private:
    int pos[2];
    int source;
    int dir;

    bool check(int x, int y, Dir dir) {
        if (y == 12 && x == 15) {
            cout << "©è¹F" << endl;
            return true;
        }

        Mazing m;
        if (m.mazing2[y][x] == 0) {

            if ((dir + 4) % 8 != source) {
                m.mazing2[pos[1]][pos[0]] = 1;
                (new Path(x, y, dir))->nextRoad();
            }
        }
        return true;

    }

};


#endif //MAZING_PATH_H
