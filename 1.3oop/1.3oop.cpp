#include <iostream>
#include <sstream>
#include <string>
#include "Money.h"

using namespace std;

int main()
{
    Money f, s, p;

    double number;
    cout << "number for multiplying = "; cin >> number;
   
    cout << endl << "first:" << endl;
    f.Read();
  
    cout << endl;
    cout << "second:" << endl;
    s.Read();
  
    cout << "first "; f.Display();
    cout << "second "; s.Display();

    cout << endl << "result of Substraction = " << p.sub(f, s) << endl;

    cout << "first result of Multiplyin = " << f.multiply(number, f) << endl;
    cout << "second result of Multiplyin = " << s.multiply(number, s) << endl << endl;


    if (ComparisionGreat(f, s))
        cout << "First Number > Second Number" << endl;
    if (ComparisionLess(f, s))
        cout << "First Number < Second Number" << endl;
    if (ComparisionEqual(f, s))
        cout << "First Number = Second Number" << endl;
   
    cout << endl << endl << endl;
    system("pause");
}