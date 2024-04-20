//============================================================================
// Name        : lab9main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "polyhead.h"
#include "comphead.h"
#include "compapp.cpp"
#include "polyapp.cpp"
using namespace std;


void exercise_1();
void exercise_2();




int main() {


    exercise_1();
    exercise_2();
    return 0;
}


void exercise_1()
{


    int degree_a, degree_b;
    double *cfa, *cfb;






    cout << "Polynomial a, please input the degree\n";
    cin >> degree_a;
    cfa = new double[degree_a + 1];


    cout << "Please input " << degree_a + 1 << " coefficients:\n";
    for (int i = degree_a; i>=0 ; i--) {
        cin >> cfa[i];
    }








    cout << "Polynomial b, please input the degree\n";
    cin >> degree_b;
    cfb = new double[degree_b + 1];


    cout << "Please input " << degree_b + 1 << " coefficients:\n";
    for (int i = degree_b; i>=0; i--) {
        cin >> cfb[i];
    }
    //double test_cfa[] = {1.1, 0, 3.3};
    //double test_cfb[] = {4.4, 5.5, 6.6};

    Polynomial a(cfa, degree_a);
    Polynomial b(cfb, degree_b);


    // a + b
    cout<<"Add";
    cout << a;
    cout << "+" << endl;
    cout << b;
    cout << "=" << endl;
    Polynomial sum;
    sum = a + b;
    cout << sum << endl;


    cout << endl;
    cout << endl;


    // a - b
    cout<<"Sub";
    cout << a;
    cout << "-" << endl;
    cout << b;
    cout << "=" << endl;
    cout << a - b << endl;


    cout << endl;
    cout << endl;
    // a * b
    cout<<"Mult";
    cout << a;
    cout << "*" << endl;
    cout << b;
    cout << "=" << endl;
    cout << a * b << endl;


    cout << endl;
    cout << endl;
    delete [] cfa;
    delete [] cfb;
}


void exercise_2()
{
    Complex com_a, com_b;
    cout << "Please input a complex number(com_a) like a + b * i:\n";
    cin >> com_a;
    cout << "You just input: ";
    cout << com_a;


    cout << "Please input a complex number(com_b) like a + b * i:\n";
    cin >> com_b;
    cout << "You just input: ";
    cout << com_b;


    cout << com_a << " + \n" << com_b;
    cout <<"="<< com_a + com_b << endl;
    cout << endl;


    cout << com_a << " - \n" << com_b;
    cout << "="<<com_a - com_b << endl;
    cout << endl;




    cout << com_a << " * \n" << com_b;
    cout << "="<<com_a * com_b << endl;
    cout << endl;




    cout << com_a << " == \n" << com_b;
    cout << (com_a == com_b ? "true" : "false") << endl;
    cout << endl;
}
/*Polynomial a, please input the degree
2
Please input 3 coefficients:
2
2
2
Polynomial b, please input the degree
2
Please input 3 coefficients:
3
3
3
Add2*x^2 + 2*x^1 + 2*x^0
+
3*x^2 + 3*x^1 + 3*x^0
=
operator +
5*x^2 + 5*x^1 + 5*x^0



Sub2*x^2 + 2*x^1 + 2*x^0
-
3*x^2 + 3*x^1 + 3*x^0
=
-1*x^2 + -1*x^1 + -1*x^0



Mult2*x^2 + 2*x^1 + 2*x^0
*
3*x^2 + 3*x^1 + 3*x^0
=
6*x^4 + 12*x^3 + 18*x^2 + 12*x^1 + 6*x^0



Please input a complex number(com_a) like a + b * i:
2 + 2 * i
You just input: 2 + 2 * i
Please input a complex number(com_b) like a + b * i:
3 + 3 * i
You just input: 3 + 3 * i
2 + 2 * i
 +
3 + 3 * i
=5 + 5 * i


2 + 2 * i
 -
3 + 3 * i
=-1 - 1 * i


2 + 2 * i
 *
3 + 3 * i
=0 + 12 * i


2 + 2 * i
 ==
3 + 3 * i
false
 *
 */

 */

