#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int x;
    cin>> x;
    while(x>0){
        unsigned int deciNum,t,result;
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
        
       
        result = 0;
        int j =0;
        for(int i=31;i>=0;i--){
            result = result + (DtoB[i]*pow(2,j));
            j++;
        }
        cout<<result <<endl; 
        x--;
    }
    return 0;
}