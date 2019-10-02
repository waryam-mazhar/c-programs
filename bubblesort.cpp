#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 500
int mul(int x, int a[], int a_size); // function prototype

void factorial(int n)
{
	int a[MAX]; // declaration
	a[0] = 1; // initialization
	int a_size = 1;
	for (int x = 2; x <= n; x++)
		a_size = mul(x, a, a_size);
	cout << "factorial of the given number \n";
	for (int i = a_size - 1; i >= 0; i--)
		cout << a[i];
}
int main()
{
	factorial(2000); // factorials calc upto 2000
	return 0;
}
int mul(int x, int a[], int a_size) // function header
{
	int c = 0;
	for (int i = 0; i < a_size; i++)
	{
		int p = a[i] * x + c;
		a[i] = p % 10;
		c = p / 10;
	}
	while (c)
	{
		a[a_size] = c % 10;
		c = c / 10;
		a_size++;
	}
	return a_size;
}