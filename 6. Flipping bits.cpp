#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>> t;
    while(t>0){
        unsigned int deciNum,t;
        cin>> deciNum;
        
        // cout<<deciNum <<endl; 
        bool DtoB[32] = {0};
        
        for(int i=0;i<32;i++){
            t = deciNum/2;
            DtoB[31-i] = deciNum%2;
            deciNum = t;
            
        }
        // if (deciNum > 0) {
                
        //     }
        
        
        for(int i=0;i<32;i++){
            cout<<DtoB[i];
        }
        cout<<endl; 
        
        for(int i=0;i<32;i++){
            if(DtoB[i]==0){
                DtoB[i]=1;
            }
            else{
                DtoB[i]=0;
            }
        }
        for(int i=0;i<32;i++){
            cout<<DtoB[i];
        }
        cout<<endl; 
        
        for(int i=0;i<32;i++){
            deciNum = deciNum + (DtoB[i]*pow(2,i));
        }
        cout<<deciNum <<endl; 
        // deciNum = DtoB.to_ulong();
        // cout<<deciNum <<endl; 
        t--;
    }
    return 0;
}

// // cout<<deciNum <<endl; 

//         bitset<32> binaryNum(deciNum);
        
//         // cout<<binaryNum <<endl; 
        
//         for(int i=0;i<32;i++){
//             binaryNum[i]=!binaryNum[i];
//         }
//         // cout<<binaryNum <<endl; 
//         deciNum = binaryNum.to_ulong();
//         cout<<deciNum <<endl; 