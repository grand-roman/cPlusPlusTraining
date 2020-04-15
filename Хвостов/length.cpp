#include <iostream>
#include <string>
using namespace std;

int len(string s) 
{
	return s.length();
}

int main()
{
	string a;
	getline(cin, a);
	cout << len(a);

}
