#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n,m,k;
        cin>>n>>m>>k;
        
        vector<int> v;
        
        for(int j=n;j>k;j--){
            v.push_back(j);
        }
        
        v.push_back(k);
        
        for(int i=k-1;i>m;i--){
            v.push_back(i);
        }
        
        for(int i=1;i<=m;i++){
            v.push_back(i);
        }
        
        for(int ele:v){
            cout<<ele<<" ";
        }
        
        cout<<endl;
        
    }
}