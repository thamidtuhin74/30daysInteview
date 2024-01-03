#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q,n,k;
    cin>>q;
    while(q>0){
        cin>>n;
        cin>>k;
        int arr1[n],arr2[n];
        
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            
        }
        
        for(int i=0;i<n;i++){
            cin>>arr2[i];
            
        }
        

        sort(arr1,arr1+n);
        sort(arr2,arr2+n,greater<int>());
        bool result = false;
        for(int i=0;i<n;i++){
            if(arr1[i]+arr2[i]>=k){
                result = true;
                // cout<<result<<endl;
                
                }
                else{
                    result = false;
                    break;
                }
            }

        cout<<(result?"YES":"NO")<<endl;


        q--;
    }
 
 
    return 0;
}

// 2
// 3 10 
// 2 1 3
// 7 8 9
// 4 5
// 1 2 2 1
// 3 3 3 4