#include "bits/stdc++.h"
using namespace std;
bool is_prime[(int)1e6+1];
bool prime_prime[(int)1e6+1];
void seive(bool is_prime[],int n)
{	n= (int)1e6;
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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(is_prime, true, sizeof(is_prime));
    int T;
    cin >> T;
    seive(is_prime,1);
    is_prime[0] = is_prime[1] = false;
    int maxN=(int)1e6;
    int cnt=0;
    for (int i=0;i<=maxN; i++)
    {	
    	if(is_prime[i])
    	{
    		cnt++;
    	}
    	if(is_prime[cnt])
    	{
    		prime_prime[i];
    	}

    }
    

    while (T--) {
    	int L,R; cin >> L >> R;


    }
    return 0;
}