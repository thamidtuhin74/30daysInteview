#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int x;
    cin>> x;
    while(t>0){
        unsigned int deciNum,t;
        cin>> deciNum;
        
        // cout<<deciNum <<endl; 
        bool DtoB[32] = {0};
        
        for(int i=0;i<32;i++){
            t = deciNum/2;
            DtoB[31-i] = deciNum%2;
            if(deciNum%2==0){
               DtoB[31-i] = 1; 
            }
            else{
                DtoB[31-i] = 0;
            }
            deciNum = t;
            // cout<<DtoB[31-i]<<endl;
            // cout<<deciNum;  
        }
        
        
        // for(int i=0;i<32;i++){
        //     if(DtoB[i]==0){
        //         DtoB[i]=1;
        //     }
        //     else{
        //         DtoB[i]=0;
        //     }
        // }
        
        for(int i=0;i<32;i++){
            deciNum = deciNum + (DtoB[i]*pow(2,i));
        }
        cout<<deciNum <<endl; 
        x--;
    }
    return 0;
}