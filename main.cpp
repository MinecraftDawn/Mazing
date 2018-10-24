#include <iostream>
#include "cpp/Mazing.h"
#include "cpp/Path.h"
#include <stack>

using namespace std;

int main() {
    Mazing mazing = *(new Mazing());

    mazing.createDefaultMazing();

    Path first = *(new Path(1, 1, W));
    first.nextRoad();

    return 0;
}