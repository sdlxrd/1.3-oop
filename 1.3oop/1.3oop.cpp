#include <iostream>
#include <sstream>
#include <string>
#include "Money.h"

using namespace std;

int main()
{
    Money f;
    Money s;

    double number;
    cout << "number for multiplying = "; cin >> number;
   
    cout << endl << "first:" << endl;
    f.Read();
  
    cout << endl;
    cout << "second:" << endl;
    s.Read();


    cout << "_______________________" << endl;
    cout << "first "; f.Display();
    cout << "   |" << endl;
    cout << "second "; s.Display();
    cout << "  |" << endl;
    cout << "______________________|" << endl;
    


    Money p;
    p.sub(f, s);

    cout << "first reslult of  ";  f.multiply(number);
    cout << "second result of "; s.multiply(number);
    cout << endl;

    if (ComparisionGreat(f, s))
        cout << "First Number > Second Number" << endl;
    if (ComparisionLess(f, s))
        cout << "First Number < Second Number" << endl;
    if (ComparisionEqual(f, s))
        cout << "First Number = Second Number" << endl;
    cout << endl << endl << endl;
    system("pause");
}