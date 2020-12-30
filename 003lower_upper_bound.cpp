#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n;
    long x;
    vector<long>v(n);
   // v.resize(n);
    for(int i=0;i<n;i++)cin>>v[i];
    //sort(v.begin(),v.end());
    vector<long>::iterator low,up;
    cin>>q;
    while(q--){
        cin>>x;
        low = lower_bound(v.begin(),v.end(),x);
        int index = low-v.begin();
        if(x==v[index])cout<<"Yes "<<index+1<<endl;
        else{
           up = lower_bound(v.begin(),v.end(),x);
           cout<<"No"<<up-v.begin()+1<<endl;
        }

       // cout<<low-v.begin()<<endl;
    }

}
