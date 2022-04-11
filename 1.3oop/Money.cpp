#include "Money.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void Money::setGrn(long value)
{
    grn = value;
}
void Money::setKop(unsigned char value)
{
    kop = value;
}
bool Money::Init(int x, int y)
{
    if (x >= 0 && y >= 0)
    {
        grn = x;
        kop = y;
        return true;
    }
    else {
        return false;
    }
}
void Money::Display() const
{
    cout << toString();
}
void Money::Read()
{
    int x, y;
    cout << "grn = ";
    cin >> x;
    do
    {
        cout << "cop = ";
        cin >> y;
    } while (!Init(x, y));
}
double Money::multiply(double number)
{
    int grns = grn;
    int kops = kop;

    double result;
    result = ((grns * 10 + kops) * number) / 10;
    cout << "multyplying = " << result << endl;
    return result;
}
int Money::change()
{
    int sum = grn * 10 + kop;
    return sum;
}

bool ComparisionGreat(Money f, Money s)
{
    return f.change() > s.change();
}
bool ComparisionLess(Money f, Money s)
{
    return f.change() < s.change();
}

bool ComparisionEqual(Money f, Money s)
{
    return f.change() == s.change();
}
double Money::sub(Money f, Money s)
{
    int first = f.change();
    int second = s.change();
    double result = (first - second * 1.0) / 10;
    cout << endl << "result of substraction = " << result << endl;
    return result;
}

string Money::toString() const
{
    stringstream sout;
    int kops = kop;
    sout << "number = " << grn  << "," << kops;
 
    return sout.str();
}