#include<bits/stdc++.h>
using namespace std;


int minimiseExpression(vector<int> &a, int n)
    {
        long long sum=0;
        for(int i=0;i<n;i++)    
        {
            sum+=a[i];
        }
        return sum/n;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        int ad = minimiseExpression(a,n);
        cout<<ad;
    }
    
}