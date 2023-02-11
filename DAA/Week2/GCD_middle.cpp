#include <iostream>
using namespace std;

bool prime(int n) {
	int flag=0;
	for (int i=2;i<=n/2;i++) {
		if (n%i==0) flag=1;
	}
	if (n==2) flag=0;
	else if (n==1) flag=0;
	if (flag==0) return true;
	else return false;
}

int gcd(int a,int b) {
	int factor=2;
	int res=1;
	while (!prime(a) || !prime(b)) {
		if (a%factor==0 && b%factor==0) {
			if (prime(factor)) {
				a=a/factor;
				b=b/factor;
				res*=factor;
				factor=2;
			}
			else factor++;
		}
		else factor++;
	}
	return res;
}

int main() {
	cout<<"Enter two numbers:\n";
	int a,b;
	cin>>a>>b;
	cout<<"GCD is "<<gcd(a,b);
}
