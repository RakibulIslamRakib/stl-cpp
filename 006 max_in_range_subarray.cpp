#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int n,rng,beg=0;cin>>n>>rng;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mx=-1;
        for(int i=beg;i<(beg+rng);i++){
            if(mx<arr[i]){
                mx=arr[i];
            }
        }
        cout<<mx<<" ";
        beg++;
        while(beg+rng<=n){
            if(mx<arr[beg+rng-1]){
                mx=arr[beg+rng-1];
                cout<<mx<<" ";
            }
            else if(mx==arr[beg-1]){
                mx=-1;
                for(int i=beg;i<(beg+rng);i++){
                    if(mx<arr[i]){
                    mx=arr[i];
                    }
                }
                cout<<mx<<" ";
            }
            else{
                cout<<mx<<" ";
            }
            beg++;
        }

        cout<<endl;

    }
}
