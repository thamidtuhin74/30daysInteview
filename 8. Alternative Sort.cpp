#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;
    int arr[n];
    int result[100]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        result[arr[i]]++;
    }

    for(int i=0;i<100;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
 
 
    return 0;
}