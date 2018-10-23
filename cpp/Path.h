//
// Created by Eric on 2018/10/23.
//

#ifndef MAZING_PATH_H
#define MAZING_PATH_H


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
    Path(int x, int y,Dir source) {
        pos = {x, y};
    }

    int *getPos() {
        return pos;
    }

private:
    int pos[2];
    int source;
    int dir;

};


#endif //MAZING_PATH_H
