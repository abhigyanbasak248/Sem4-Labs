#include <iostream>
using namespace std;

//int gcd(int a,int b) {
//	if (a==0) {
//		return b;
//	}
//	else if(b==0) {
//		return a;
//	}
//	else {
//		gcd(b,a%b);
//	}
//}

int gcd(int a,int b) {
	do {
		int r=a%b;
		a=b;
		b=r;
			
	} while (b!=0);
	return a;
}

int main() {
	int a,b;
	cout<<"Enter two numbers\n";
	cin>>a>>b;
	cout<<"GCD is "<<gcd(a,b);
}
