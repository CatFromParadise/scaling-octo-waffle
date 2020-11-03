#include<iostream>
#include<cmath>

using namespace std;

void main()
{
	double x, y;
	cout << "input x, y" << endl;
	cin >> x >> y;
	double r1, r2;
	r1 = 1 + x / 2 + y / 4;
	r2 = pow((abs(x - 1) - pow(y, 1 / 3)), 1 / 2);
	cout <<"example is equal to: " << r2 / r1;
	cout<<" changes"<<endl;
}
