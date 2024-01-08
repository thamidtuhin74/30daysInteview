#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,k;
    cin>>n>>k;

    long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    
    long result = arr[k-1]-arr[0];

    for(int i=0;i<n-k+1;i++){
        if(arr[i+k-1]-arr[i]<=result)
            result = arr[i+k-1]-arr[i];
    }

    cout<<result<<endl;
 
 
    return 0;
}

// Input (stdin)
// 7
// 3
// 10
// 100
// 300
// 200
// 1000
// 20
// 30
// Expected Output
// 20