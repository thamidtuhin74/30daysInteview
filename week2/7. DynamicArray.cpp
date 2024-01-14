#include<bits/stdc++.h>
// #include "7. DynamicArray.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,q;
    cin>>n>>q;
    vector<int> arr[n];
    // vector<long> arr1;
    
    int lastAns = 0;

    while(q>0){
        int x,y,qType,idx;
        cin>>qType>>x>>y;
        // cout<<qType<<x<<y;
        if(qType==1){
            idx = ((x^lastAns)%n);
            // cout<<"Idx = "<<idx<<endl;
            arr[idx].push_back(y);       
        }
        else if(qType==2){
            idx = ((x^lastAns)%n);
            lastAns = arr[idx][y% (arr[idx].size())];
            cout << lastAns << endl;
        }
        q--;
    }
    return 0;
}

// 2 5
// 1 0 5
// 1 1 7
// 1 0 3
// 2 1 0
// 2 1 1