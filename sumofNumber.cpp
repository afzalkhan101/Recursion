#include<bits/stdc++.h>
using namespace std;
int sumofNumber(int sum , int n){

   if (n==0){
     return sum;
   }

   return sumofNumber(sum+n , n-1);
}
int main(){

    int n,sum=0;cin>>n;
    cout<<sumofNumber(sum , n);

 return 0;
}
