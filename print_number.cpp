#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    if(n ==0){
        cout<<'\n';
        return 0;
    }
    if(n==1){
        cout<<n;
    }
    else if(n>1){
        cout<<n<<' ';
    }

    return solve(n-1);

  return 0;
}
int main(){
    int n;cin>>n;
    solve(n);
 return 0;
}
