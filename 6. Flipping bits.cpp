#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    unsigned int deciNum;
    cin>> deciNum;
    bitset<32> binaryNum(deciNum);
    
    cout<<binaryNum <<endl; 
    return 0;
}