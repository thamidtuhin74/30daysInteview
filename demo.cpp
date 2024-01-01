#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;

    int x;
    int indexArray[101] ={0}; 
    //array input
    for(int i=0;i<n;i++){
        cin>>x;
        indexArray[x]++;
    }

    for(int i=0;i<n;i++){
        if(indexArray[i]==1){
            cout<<i<<endl;
        }
    }
    
    cout<<"Hello"<<endl;
 
 
    return 0;
}