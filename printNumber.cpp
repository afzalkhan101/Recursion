#include<bits/stdc++.h>
using namespace std;
// Pint N Number with reverse order

int printNumber(int n){

    if(n<=1){
        return 1;
    }
    else{
        cout<<n<<endl;
        return printNumber(n-1);
    }


}

int main(){
    int n ;cin>>n;
    cout<<printNumber(n);
 return 0;
}
