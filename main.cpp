#include<iostream>
using namespace std;

double geo_progression(double a, double r, int n);

double geo_progression(double a, double r, int n)
{
	if (n == 1)
		return a;
	else
	{
		return r*geo_progression(a, r, n-1);
	}
	
}


int main()
{
	double	b=geo_progression(2.0, 4.0, 3);
	cout << b;
	getchar();
	return 0;
}