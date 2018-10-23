#include <iostream>
#include "cpp/Mazing.h"
#include "cpp/Path.h"


using namespace std;

int main() {
    Mazing mazing = *(new Mazing());

    mazing.createDefaultMazing();

    Path first = *(new Path(0, 0, W));
    first.nextRoad();
    return 0;
}