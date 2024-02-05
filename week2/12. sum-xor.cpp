#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long int n;
    cin>>n;
 
    cout<<"n = "<<n<<endl;
    cout<<__builtin_popcount(n)<<endl;
    int resetBit = (int(log2(n))+1) - (__builtin_popcountll(n));
    cout<<"resetBit = "<<resetBit<<endl;    

    cout<<int(pow(2,resetBit))<<endl;

    return 0;
}

// 3434444444333
// 262144