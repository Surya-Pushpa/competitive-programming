#include <iostream>
using namespace std;

int main() {
	long long int a,b,c;
	cin>>a>>b;
	c = a - b;
	if (c%10 != 9) {
		cout<<(c+1);
	} else {
		cout<<(c-1);
	}
	return 0;
}
