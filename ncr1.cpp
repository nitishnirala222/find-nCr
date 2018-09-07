#include<iostream>
using namespace std;
int fact(int x)
{
	int f=1;
	for(;x>0;x--)
	f=f*x;
	return f;
}
int main()
{
	int d,n,r;
	cout<<"enter the value of n and r respectively: ";
	cin>>n>>r;
	d=fact(n)/(fact(r)*fact(n-r));
	cout<<"nCr= "<<d;
}
