#include <iostream>
#include <string>
using namespace std;

string turn(string s)
{
	int st, end;
	end = s.length()-1;
	for (st = 0; st < end; st++, end--){
		char p = s[st];
		s[st] = s[end];
		s[end] = p;
}
	return s;
}

int main()
{
	string a;
	getline(cin, a);
	cout << turn(a);

}
