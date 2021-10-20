#include "bits/stdc++.h"
using namespace std;
void brute_prime_factor(int n)
{	cout<<"Prime factors of "<<n<<" = ";
	for (int i=2; i<=n; i++)
	{	
		if ( n%i == 0)
		{
			int cnt=0;
			while (n%i == 0)
			{
				cnt++;
				n=n/i;
			}
			printf("( %d^%d ) ",i,cnt);
		}
	}
	cout<<endl;
}

void prime_factor(int n)
{	cout<<"Prime factors of "<<n<<" = ";
	for (int i=2; i*i<=n; i++)
	{	
		if ( n%i == 0)
		{
			int cnt=0;
			while (n%i == 0)
			{
				cnt++;
				n=n/i;
			}
			printf("( %d^%d ) ",i,cnt);
		}
	}
	if(n>=2)
	{
		printf("( %d^%d ) ",n,1);
	}
	cout<<endl;
}
int main()
{
	int n; cin>>n;
	brute_prime_factor(20);
	prime_factor(421);
    return 0;
}