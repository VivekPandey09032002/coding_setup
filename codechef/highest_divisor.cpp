#include "bits/stdc++.h"
using namespace std;

int main()
{
	int N; cin>>N;
	int i=N;
	while (i>1)
	{
		if (N%i==0 and i<=10 )
		{
			cout<<i;
			return 0;
		}
		i--;
	}
	cout<<i;

    return 0;
}