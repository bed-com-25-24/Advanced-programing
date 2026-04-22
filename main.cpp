#include <iostream>
#include "rectangle.h"
#include "triangle.h"

using namespace std;
int main(){
    rectangle rect;
    triangle trgl;
    rect.setValues(4, 5);
    trgl.setValues(4, 5);
    cout << rect.area()<<'\n';
    cout << trgl.area()<<'\n';
    return 0;
}