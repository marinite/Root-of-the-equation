#include <iostream>
#include <math.h>
#include <string>
using namespace std;

double y(double x)
{
	return x + sin(x);
}

double find(double left, double right, double e)
{
	double x, f;
	int i = 0;
	do
	{
		i++;
		x = (left + right) / 2;
		f = y(x);
		if (f > 0)
			right = x;
		else
			left = x;
	} while (fabs(x-f) > e);
	cout << "i: " << i << endl;
	return x;
}

int main()
{
	double a, b, e;
	string input1, input2, input3;

	cout << "Enter a b and e separated by a space:"<<endl;
	cin >> input1 >> input2 >> input3;

	try
	{
		a = stof(input1.c_str());
		b = stof(input2.c_str());
		e = stof(input3.c_str());
		cout << "x= " << find(a, b, e) << endl;
	}
	catch (...)
	{
		cout << "Error";
	}

	return 0;
}