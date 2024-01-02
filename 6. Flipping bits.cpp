#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int x;
    cin>> x;
    while(x>0){
        unsigned int deciNum,t;
        cin>> deciNum;
        
        // cout<<deciNum <<endl; 

        bitset<32> binaryNum(deciNum);
        
        // cout<<binaryNum <<endl; 
        
        for(int i=0;i<32;i++){
            binaryNum[i]=!binaryNum[i];
        }
        // cout<<binaryNum <<endl; 
        deciNum = binaryNum.to_ulong();
        cout<<deciNum <<endl; 
        x--;
    }
    return 0;
}

