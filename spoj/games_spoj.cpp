#include "bits/stdc++.h"
using namespace std;


int main()
{
    int T; cin>>T;
    while(T--){
        string avg; cin>>avg;
        int size=avg.size();
        auto pos=avg.find(".");
        int count=0;
        string decavg="";
        if(pos!=string::npos){
            count=(size-1)-pos;
            decavg+=avg.substr(pos+1);
        }
        int p=1;
        if(decavg.size()!=0)
            p=stoi(decavg);

        int q=(int) pow(10,count);
        cout<<q/__gcd(p,q)<<"\n";
        
        
    }
}
