#include <iostream>
#include "shape.h"
using namespace std;

int main() {
    Rectangle rect(5, 10);
    cout << "The size of the rectangle is: " << rect.GetSize() << endl;

    return 0;
}