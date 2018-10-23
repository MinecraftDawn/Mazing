#include <iostream>
#include "cpp/Mazing.h"


using namespace std;

int main() {
    Mazing mazing = *(new Mazing());

    mazing.createDefaultMazing();

    mazing.show();
    return 0;
}