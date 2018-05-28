// 2018.05.28.PM.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int foot, int inch)
	{
		feet = foot + inch / 12;
		inches = inch % 12;
	}
	void display()
	{
		cout << feet << " feet " << inches << "inches" << endl;
	}
	CFeet add(CFeet&o)
	{
		CFeet temp;
		temp.setvalue(feet + o.feet, inches + o.inches);
		return temp;
	}
	CFeet operator +(CFeet&o)
	{
		CFeet temp;
		temp.setvalue(feet + o.feet, inches + o.inches);
		return temp;
	}
	CFeet operator -(CFeet&o)
	{
		CFeet temp;
		temp.Setvalue(feet - o.feet, inches- o.inches);
		return temp;
	}
	void Setvalue(int foot, int inch)
	{   
		feet = foot + inch / 12;
		inches = inch % 12;
	}
};

int main()
{
	int x, y, z;
	int x1, y1, z1;
	cin >> x >> y;
	cin >> x1 >> y1;
	CFeet A, B, C;
	A.Setvalue(x,y);
	B.Setvalue(x1,y1);
	C = A + B;
	C.display();
	C = A - B;
	C.display();
	return 0;
}

