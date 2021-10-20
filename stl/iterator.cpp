/*
	General way to access data in containers
*/
#include "bits/stdc++.h"
using namespace std;
void reverse_array_simple(int *A, int N)
{
	int first = 0, last = N - 1; 
	while (first < last)
	{
		swap(A[first], A[last]);
		first++;
		last--;
	}
}
void show (int * A, int N)
{
	for_each(A, A+N, [](int x)
	{
		cout<<x<<" ";
	});
	cout<<endl;
}
int main ()
{
	int A[] ={1,2,3,4,5,6,7,8};
	reverse_array_simple(A,8);
	show(A,8);
	// for a simple reverse we needed 4 pointer first, last, compare, increment, decrement


	return 0;

}