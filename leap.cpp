#include<bits/stdc++.h>
using namespace std;

int isLeap(int N){
        if(N % 100 == 0)
        {
            if(N % 400 == 0)
            {
                return 1;
            }
            else
                return 0;
        }
        else if(N % 4 == 0)
            return 1;
        else
            return 0;
}

int main(){
    int n;
    cin>>n;
    cout<<isLeap(n);
}