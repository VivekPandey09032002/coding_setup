#include "bits/stdc++.h"
using namespace std;

int main()
{
	int T; cin>>T;
	while (T--)
	{
		string str; cin>>str;

		cout<<count (str.begin(), str.end(), '4')<<endl;
	}
    return 0;
}