#include <iostream>
using namespace std;

int gcd(int a,int b) {
	int t;
	if (a<b) t=a;
	else t=b;
	int m=a,n=b;
	while (m!=0 || n!=0) {
		m=a%t;
		if (m==0) {
			n=b%t;
			if (n!=0) t--;
		}
		else t--;
	}
	return t;
}

int main() {
	int a,b;
	cout<<"Enter two numbers\n";
	cin>>a>>b;
	cout<<"GCD is "<<gcd(a,b);
}
