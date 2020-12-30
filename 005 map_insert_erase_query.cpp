#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    map<string,int>mp;
    while(q--){
        int x,qt;string name;
        cin>>qt;
        if(qt==1){
        cin>>name>>x;
        if(mp.find(name)!=mp.end())mp[name]+=x;
        else mp.insert(make_pair(name,x));
        }
        else if(qt==2){
                cin>>name;
                mp.erase(name);
        }
        else{
            cin>>name;
            if(mp.find(name)!=mp.end())cout<<mp[name]<<endl;
            else cout<<"0"<<endl;
        }

    }
}
