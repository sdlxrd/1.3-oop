#pragma once
#include <string>
#include <sstream>

using namespace std;
class Money
{
private:
	long grn;
	unsigned char kop;
public:
	long getGrn() const { return grn; };
	unsigned char getKop() const { return kop; };

	void setGrn(long value);
	void setKop(unsigned char kop);

	bool Init(int x, int y);
	
    string toString() const;
	void Display() const;
	void Read();

	double sub(Money f, Money s);
	int change();

	friend bool ComparisionGreat(Money f, Money s);
	friend bool ComparisionLess(Money f, Money s);
	friend bool ComparisionEqual(Money f, Money s);

	double multiply(double number);
};