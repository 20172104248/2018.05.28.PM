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
		feet = foot;
		inches = inch;
	}
	void display()
	{
		cout <<feet << " feet " << inches << "inches" << endl;
	}
	CFeet operator -(CFeet&o)
	{
		int X;
		inches = inches+feet*12;
		o.inches = o.inches + o.feet * 12;
		X=inches-o.inches;
		CFeet temp;
		if (X<0)
		{  
			if (X<=-12)
			{
				X=-1*X;
				temp.setvalue(-1*(X / 12), X% 12);
			}
			else
			{
				temp.setvalue(X / 12,(X % 12));
			}
		}
		else
		{
			temp.setvalue(X / 12, X % 12);
		}
		return temp;
	}
};

int main()
{   
	int x1, x2, y1, y2;
	CFeet A, B, C;
	cin >> x2 >> y2;
	A.setvalue(x2,y2);
	cin >> x1 >> y1;
	B.setvalue(x1,y1);
	C = A - B;
	C.display();
	return 0;
}




