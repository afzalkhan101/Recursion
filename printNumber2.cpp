#include<bits/stdc++.h>
using namespace std;
int print_number(int n){

    if (n == 0){

        return 0;

    }

    cout<<n<<endl;

    return print_number(n-1);
}
int main(){

    int n;cin>>n;
    print_number(n);

 return 0;
}
