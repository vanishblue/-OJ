#include<iostream>
using namespace std ;
int main()
{
	char n[4] ;
	while (cin >> n)
	{
		if (n[0]>n[1]) swap(n[0],n[1]) ;
		if (n[1]>n[2]) swap(n[1],n[2]) ;
		if (n[0]>n[1]) swap(n[0],n[1]) ;
		cout<<n[0]<<" "<<n[1]<<" "<<n[2]<<endl ;
	}
}