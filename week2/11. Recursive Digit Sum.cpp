#include<bits/stdc++.h>
using namespace std;

int calculation(string kTimesN[], int arrSize, int k){
    int sum;

    for(int i=0;i<k;i++){
        
    }

    if(sum>9){
        calculation(kTimesN,arrSize,k);
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    int k;
    cin>>n>>k;
    string kTimesN;

    
    for(int i=0;i<k;i++){    
        kTimesN.append(n);
    }
    cout<<kTimesN<<endl;

    int sum=0;

    for(int i=0;i<kTimesN.length();i++){
        sum+= stoi(kTimesN[0]);
    }

    // calculation(kTimesN , arrSize, k);



    
 
    return 0;
}