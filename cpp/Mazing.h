//
// Created by Eric on 2018/10/23.
//

#ifndef MAZING_MAZING_H
#define MAZING_MAZING_H

#include <iostream>

using namespace std;

class Mazing {
private:
    bool mazing[12][15] = {{0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1},
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
        int a[3];
    }

    void show(){
        for (int i = 0; i < 12; ++i) {
            for (int j = 0; j < 15; ++j) {
                cout << mazing[i][j];
            }
            cout << endl;
        }

    }

};


#endif //MAZING_MAZING_H
