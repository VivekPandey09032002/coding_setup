#include "bits/stdc++.h"
using namespace std;

void show (vector < int > v )
{
	for_each (v.begin(), v.end(),[](int x)
	{
		cout<<x<<" ";
	});
	cout<<endl;
}


int main ()
{	// v.size()= O(1)
	vector < int > v (10,2);  // intialize with 2
	// size vs empty
	bool is_nonempty_notgood = (v.size() >= 0);
	bool is_nonempty_good = !v.empty();
	// size() is unsigned
	// not all size() return size in O(1)

	// For inserting in vector
	// push_back()
	v.push_back(11);
	// resize() make vector contains required numbers of element
	v.resize(10);
	// now push back will insert after 10 size
	v.push_back(11);
	v.pop_back();
	show(v);

	// many initalizatoin of vector
	vector < int > v2 = v;
	vector < int > v3 = v;
	// both are same
	vector < int > data(1000); // vector of 1000 element value 0

	// 2-D vector
	int n=3,m=4;
	vector < vector < int > > matrix(n, vector < int > (m,-1));
	
	// always pass vector by reference as it doesn't create a copy


	// Pairs

	pair < string , pair < int, int > > P ("vivek", {2, 3} );
	string s= P.first; // extract string
	int x = P.second.first; // extract first int
	int y= P.second.second; // extract second int
	cout<<s<<" "<<x<<" "<<y<<endl;


	//vector of pairs
	vector < pair < int, int > > vp ={ {1,3}, {2,4} };
	// printing vector-pair
	for (int i=0; i < vp.size(); i++)
	{
		cout << vp[i].first << " " << vp[i].second << endl;
	}

	//vector of vector
	vector < vector < int > > vov;
	// vov empty so vov.push_back needs a vector
	vov.push_back({1,2,4});
	cout << vov[0][0] << " " << vov[0][1] << endl;


	return 0;
}