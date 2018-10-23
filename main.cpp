#include <iostream>
#include "cpp/Mazing.h"
#include "cpp/Path.h"


using namespace std;

int main() {
    Mazing mazing = *(new Mazing());

    mazing.createDefaultMazing();

//    cout << mazing.mazing2[1][1];
    Path first = *(new Path(1, 1, W));
    first.nextRoad();
    return 0;
}