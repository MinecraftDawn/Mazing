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
        this->source = source;

        cout << "Current Pos " << y << " " << x << endl;
    }

    int *getPos() {
        return pos;
    }

    void nextRoad() {
        m.road.push(source);
        // E
        if (check(pos[0] + 1, pos[1], W)) {
            return;
        }

        // SE
        if (check(pos[0] + 1, pos[1] + 1, NW)) {
            return;
        }

        // S
        if (check(pos[0], pos[1] + 1, N)) {
            return;
        }

        // SW
        if (check(pos[0] - 1, pos[1] + 1, NE)) {
            return;
        }

        // W
        if (check(pos[0] - 1, pos[1], E)) {
            return;
        }

        // NW
        if (check(pos[0] - 1, pos[1] - 1, SE)) {
            return;
        }

        // N
        if (check(pos[0], pos[1] - 1, S)) {
            return;
        }

        // NE
        if (check(pos[0] + 1, pos[1] - 1, SW)) {
            return;
        }

        cout << "Back" << endl;

    }

private:
    int pos[2];
    int source;
    Mazing m;

    bool check(int x, int y, Dir dir) {
        if (y == 12 && x == 15) {
            cout << "©è¹F" << endl;

            stack<int> s;
            while (!m.road.empty()) {
                s.push((m.road.top() + 4) % 8);
                m.road.pop();
            }

            while (!s.empty()) {
                cout << s.top() << " " << endl;
                s.pop();
            }

            return true;
        }

        if (m.mazing2[y][x] == 0) {

            if ((dir + 4) % 8 != source) {
                m.mazing2[pos[1]][pos[0]] = 1;
                (new Path(x, y, dir))->nextRoad();
            }
        }
        return false;

    }

};


#endif //MAZING_PATH_H
