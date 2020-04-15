#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
	int* _a = a;
	int* _b = b;
	int t = *_a;
	*_a = *_b;
	*_b = t;
}

int main()
{
	int a, b;
	cin >> a >> b;
	swap(&a,&b);
	
	cout << a<< " "  << b;
}
