#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    set<long>s;
    while(q--){
        int x,qt;
        cin>>qt>>x;
        if(qt==1)s.insert(x);
        else if(qt==2) s.erase(x);
        else{
            if(s.find(x)!=s.end())cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }

    }
}
