#include<iostream>
using namespace std;
int gcd(int p,int q)
{
	if(q == 0) return p;
	int r = p%q;
	return gcd(q,r);
}
int main()
{
	int a,b;
	cin>>a>>b;
	int c = gcd(a,b);
	cout<<c<<endl;
}
