#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    int add(int a,int b){
        return a*b;
    }
};

class Derived: public Base{
    public:
    int add(int x,int y){
        // return x+y;
        return Base::add(x,y);
    }
    
};
int main(){
    Derived obj;
    cout<<obj.add(5,6);
    
}