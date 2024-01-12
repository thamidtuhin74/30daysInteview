#include<bits/stdc++.h>
// #include "7. DynamicArray.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,q;
    cin>>n>>q;
    vector<long> arr0;
    vector<long> arr1;
    long lastAns = 0;

    while(q>0){
        long x,y,qType,idx;
        cin>>qType>>x>>y;
        // cout<<qType<<x<<y;
        if(qType==1){
            idx = ((x^lastAns)%n);
            // cout<<"Idx = "<<idx<<endl;
            if(idx==0){
                arr0.push_back(y);

                // cout <<"arr0 = [";
                // for (int value : arr0) {
                //     cout << value << " ";
                // }
                // cout <<"]"<< endl;
            }
            else{
                arr1.push_back(y);

                // cout <<"arr1 = ["<<endl;
                // for (int value : arr1) {
                //     cout << value << " ";
                // }
                // cout <<"]"<< endl;
            }         
        }
        else if(qType==2){
            idx = ((x^lastAns)%n);
            // cout<<"Idx = "<<idx<<endl;

            if(idx==0){
                // arr0.push_back(y);
                int size0 = arr0.size();
                if (size0 > 0) {
                    lastAns = arr0[y % size0];
                    cout << lastAns << endl;
                } 

            }
            else{
                int size1 = arr1.size();
                if (size1 > 0) {
                    lastAns = arr1[y % size1];
                    cout << lastAns << endl;
                }
            }
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