#include "bits/stdc++.h"
using namespace std;
int power(int a,int power)
{
	int res=1;
	for(int i=1; i<=power; i++)
	{
		res=res*a;
	}
	return res;
}
int power_log(int a, int power)
{
	int res=1;
	while (power >0)
	{
		if(power%2==0)
		{
			a=a*a;
			power=power/2;
		}
		else
		{
			res=res*a;
			power--;
		}
	}
	return res;
}
int main()
{
	cout<<power(2,5);
	cout << " "<< power_log(3,3);
    return 0;
}