#include "bits/stdc++.h"
using namespace std;
// Program to check wheather a number is prime or not
// T(n)=O(N)
bool is_prime(int n){
	if(n==1)
		return false;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
// T(N)=O(sqrt(N))
bool is_prime_opt(int n){
	if (n==1)
		return false;
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return true;
}

/*

Logic -> All divisor (that divides the number completely) occurs in pair
	eg 12=1,2,3,4,6,12
	pair -> (1,12), (6,2) ,(3,4)

	Theorm -> (a,b) then a lies below sqrt(n) and b lies above sqrt(n) unless a==b lies on sqrt(n)


*/

int main()
{	
	int n; cin>>n;
	if(is_prime_opt(n))
		cout<<"prime";
	else
		cout<<"not prime";

    return 0;
}