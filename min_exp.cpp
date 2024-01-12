#include<bits/stdc++.h>
using namespace std;


int minimiseExpression(vector<int> &a, int n)
    {
        unordered_set<int>st;
        for(auto i:a)
        st.insert(i);
        
        long long int sum=0;
        for(auto j:st){
            sum+=j;
        }
        long long int ans = (sum)/st.size();
        return ans;
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