#include "bits/stdc++.h"
using namespace std;

bool is_not_prime[90000001]; // false
void seive()
{
	is_not_prime[0] = is_not_prime[1] = true; // both are not prime so true
	int maxN= (int)9e7;
	for (int i=2; i*i<=maxN; i++)
	{
		if(!is_not_prime[i]) // if prime
		{	// marking all the multiples of primes as true
			for (int j=i*i; j<=maxN; j+=i)
			{
				is_not_prime[j] = true;
			}
		}
	}
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // generate all the prime till maxN
    seive();
    int maxN= (int)9e7;
    //making vector
    vector < int > kth_prime;
 	//storing all the prime numbers till max N so that we can generate it in O(1)   
    for (int i=2; i<=maxN ;i++)
    {
    	if ( !is_not_prime[i] )
    	{	
    		kth_prime.push_back(i);
    	}
    }

    int Q; // q - queries
    cin >> Q;

    while (Q--) {
    	int K; cin>>K;
    	cout<<kth_prime[K-1]<<endl;
    }
    return 0;
}