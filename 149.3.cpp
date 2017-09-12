#include<iostream>
using namespace std;
int donumber(int x,int n)
{
	if(n == 0) return 1;
	if(n == 1) return 2*x;
	return 2*x*donumber(x,n-1)-2*(n-1)*donumber(x,n-2);
}
int main()
{
	int a,b;
	cout<<"输入x和n的值";
	cin>>a>>b;
	int c = donumber(a,b);
	cout<<c<<endl;
}
