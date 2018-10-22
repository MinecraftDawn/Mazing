//
// Created by Eric on 2018/10/23.
//

#ifndef MAZING_MAZING_H
#define MAZING_MAZING_H

#include <iostream>

using namespace std;

class Mazing {
private:
    bool mazing[15][15];

public:
    void setElement(int col, int row, bool wall) {
        if (col >= 15 || row >= 15) {
            cout << "row or col too big";
            return;
        }

        mazing[col][row] = wall;
        return;
    }

    void createDefaultMazing() {
        mazing = {{0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1},
                  {1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1},
                  {0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1},
                  {1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0},
                  {1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1},
                  {0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1},
                  {0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1},
                  {0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
                  {0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1},
                  {1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0},
                  {0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0},
                  {0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0}};
    }

};


#endif //MAZING_MAZING_H
