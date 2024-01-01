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

    //for(int i=0;i<n;i++){
    //    cout<<arr[i]<<" ";
    //}

    //cout<<"-----------"<<endl;


    vector<int> uniqueArr;
    int equalQunt;
    int i = 0;
    while(i<n){
        equalQunt = 1;
        //cout<<"I = "<<i<<endl;

        if(i== n-1){
            uniqueArr.push_back(arr[i]);
            //cout<< arr[i]<<endl;
            break;
        }
        else{
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    equalQunt++;
                }
                else{
                    uniqueArr.push_back(arr[i]);
                    //cout<< arr[i]<<endl;
                    i = i + equalQunt;
                    break;
                }
            }
        }


    }

    //cout<<"-----------"<<endl;

    //for(int i=0; i<uniqueArr.size();i++){
    //    cout<< uniqueArr[i]<<endl;
    //}
    cout<< uniqueArr.size()<<endl;
    //cout<<"Hello";
    return 0;

}
