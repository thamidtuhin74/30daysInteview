#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    vector<int> uniqueArr;
    int equalQunt;
    int i = 0;
    while(i<n){
        equalQunt = 1;

        if(i== n-1 && equalQunt==1){

            uniqueArr.push_back(arr[i]);
            break;
        }
        else{
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    equalQunt++;
                }
                else{
                    if(equalQunt==1){
                        uniqueArr.push_back(arr[i]);
                    }

                    i = i + equalQunt;
                    break;
                }
            }
        }


    }

    for(int i=0; i<uniqueArr.size();i++){
       cout<< uniqueArr[i]<<endl;
    }

    return 0;

}
