//============================================================================
// Name        : figure.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include "figure.h"
#include "circle.h"
#include "triangle.h"
using namespace std;
void myDraw(Figure *fig)
{
    fig->draw();
    cout << "\n myDraw: Derived class object calling center(). \n";
    fig->center();
}


int main(){
    Figure *fig;
    Triangle *tri = new Triangle;
    fig = tri;
    fig->draw();
    cout << "\n Derived class Triangle object calling center(). \n";
    fig->center();
    myDraw(tri);


    cout<<"____________________\n";
    Circle *cir = new Circle;
    fig = cir;
    fig->draw();
    cout << "\n Derived class Circle object calling center(). \n";
    fig->center();
    myDraw(cir);
return 0;
}
/*virtual
 * Draw called by Triangle.

 Derived class Triangle object calling center().
Center called by Figure.
Erase called by Triangle.
Draw called by Triangle.
Draw called by Triangle.

 myDraw: Derived class object calling center().
Center called by Figure.
Erase called by Triangle.
Draw called by Triangle.
____________________
Draw called by Circle.

 Derived class Circle object calling center().
Center called by Figure.
Erase called by Circle.
Draw called by Circle.
Draw called by Circle.

 myDraw: Derived class object calling center().
Center called by Figure.
Erase called by Circle.
Draw called by Circle.
 *
 *
 *no virtual
 *Draw called by Figure.

 Derived class Triangle object calling center().
Center called by Figure.
Erase called by Figure.
Draw called by Figure.
Draw called by Figure.

 myDraw: Derived class object calling center().
Center called by Figure.
Erase called by Figure.
Draw called by Figure.
____________________
Draw called by Figure.

 Derived class Circle object calling center().
Center called by Figure.
Erase called by Figure.
Draw called by Figure.
Draw called by Figure.

 myDraw: Derived class object calling center().
Center called by Figure.
Erase called by Figure.
Draw called by Figure.
 */
