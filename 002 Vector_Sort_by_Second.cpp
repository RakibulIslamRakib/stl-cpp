#include<bits/stdc++.h>
using namespace std;

bool sortBysecond(const pair<int,int> &a,const pair<int,int> &b){
    return a.second<b.second;
}


int main(){
map<int,int> mp;
vector<pair<int,int> >v;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int s,f;
    cin>>s>>f;
    v.push_back(make_pair(s,f));

}
for(auto x:v)cout<<x.first<<" "<<x.second<<endl;
sort(v.begin(),v.end(),sortBysecond);
cout<<"after:"<<endl;
for(auto x:v)cout<<x.first<<" "<<x.second<<endl;
}
