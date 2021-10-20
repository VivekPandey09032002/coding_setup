#include "bits/stdc++.h"
using namespace std;

int main()
{	// pair container 2 values of any type
	pair < int, string > p1,p2;
	//intialize
	p1 = make_pair(1,"vivek");
	p2 = {1,"vishal"};

	// value vs reference
	pair <int , string > p_val=p1;
	pair <int, string > &p_ref=p2;

	cout<<"Intialization\n";
	cout << p1.first << " " << p1.second<<endl;
    cout << p2.first << " " << p2.second<<endl;
    // value
	p_val.first=2;
	//ref
	// this will change p2
	p_ref.first=2;
    // printing ref vs value
    cout<<"Checking val vs ref\n";
    cout << p1.first << " " << p1.second<<endl;
    cout << p2.first << " " << p2.second<<endl;  // 1 change to 2

    // pair is used to make relation b/w two object
    
    
    return 0;
}