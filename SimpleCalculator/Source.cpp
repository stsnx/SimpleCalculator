#include<iostream>
using namespace std;
int main()
{
	int x, y;
	char d;
	cin >> x >> d >> y;
	if (d == '+') cout << x + y;
	else if (d == '-') cout << x - y;
	else if (d == '*') cout << x * y;
	else if (d == '/') cout << (float)x / y;
	return 0;
}