// This was my first code that got accepted in C++ on Codeforces !

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        int sum=0;
        vector<int> eff(n-1);
        for (int i=0;i<n-1;i++){
            cin>>eff[i];
            sum+=eff[i];
        }
        cout<<-sum<<endl;
    }
    
    
}
