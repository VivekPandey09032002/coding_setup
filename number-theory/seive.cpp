#include "bits/stdc++.h"
using namespace std;
void print_arr(bool arr[] ,int n)
{
	for_each(arr,arr+n+1,[](int i)
	{
		cout<<i<<" ";
	});
	cout<<endl;
}
// my solve
void seive(bool is_prime[],int n)
{
	for (int i=2;i*i<=n;i++){
		if(is_prime[i]) // if prime then marking multiple of that prime as composite
		{	int start=i*i;
			while (start<=n)
			{	//makeing composite
				is_prime[start]=false;
				start=start+i;
			}
		}
			
	}
}

vector<int> primes;
bool arr[9000001];   // false

void seive_code_n_code ( )
{
	int maxN=9000000;
	arr[0]=arr[1]=true; // composite
	for(int i=2;i*i<=maxN;i++)
	{
		if(!arr[i])  // prime
		{
			for (int j=i*i;j<=maxN;j=j+i)
			{	//composite
				arr[i]=true; 
			}
		}
	}

	for (int i=2;i<=maxN;i++)
	{
		if(!arr[i])
		{
			primes.push_back(i);
		}
	}
}
int main()
{	

	// int n; cin>>n;
	// bool is_prime[n+1];
	// // making every number prime
	// memset(is_prime,true,sizeof(is_prime));
	// // 1 and 0 is composite number
	// is_prime[0]=0;
	// is_prime[1]=0;
	// //print_arr(is_prime,n);
	// seive(is_prime,n);
	// print_arr(is_prime,n);

	//code and code solve
	
	seive_code_n_code();
	int q,n; cin>>q;
	while (q--)
	{
		cin>>n;
		cout<<primes[n-1]<<endl;
	}
    return 0;
}