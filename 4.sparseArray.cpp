#include <bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    //get input
    cin>>n;
    string input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    //get queries
    cin>>q;
    string queries[q];
    for(int i=0;i<q;i++){
        cin>>queries[i];
    }
    vector<int> arr;
    int qunter;
    for(int i=0;i<q;i++){
        qunter = 0;
        for(int j=0;j<n;j++){
            if(queries[i]==input[j]){
                qunter++;
            }
            if(j==n-1){
                arr.push_back(qunter);
            }
        }
    }

    for(int i=0;i<q;i++){
        cout<<arr[i]<<endl;
    }






    return 0;
}