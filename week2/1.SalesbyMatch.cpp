#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;
    int arr[n];
    int sockCount[101]={0};
    int countPair = 0;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
        sockCount[arr[i]]++;
    }
    for (int i = 0; i <= 100; i++){
        if(sockCount[i]/2){
            countPair+= sockCount[i]/2;
        }
    }
    
 
    cout<<countPair<<endl;
 
 
    return 0;
}