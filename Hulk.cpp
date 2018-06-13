//http://codeforces.com/problemset/problem/705/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i=0;
    cin>>n;
    while(i!=n){
        if(i==n-1){
            if(i%2==0)
        cout<<"I hate it";
    else
        cout<<"I love it";
        }
        else{
        if(i%2==0)
        cout<<"I hate that ";
    else
        cout<<"I love that ";
        }

    i++;
    }
return 0;
}
