#include<bits/stdc++.h>
using namespace std;

bool solve(int n,int k,int x,int y){
    int start=(x+k)%n;
    if (x==y)
    return true;
    while(start!=x){
        if (start==y)
        return true;
        start=(start+k)%n;
    }
    return false;
}
int main(){
    int n,k,x,y,tc,i;
    cin>>tc;
    for (i=0;i<tc;i++){
        cin>>n>>k>>x>>y;
        if (solve(n,k,x,y)==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
