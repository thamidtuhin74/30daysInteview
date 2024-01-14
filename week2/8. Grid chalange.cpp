#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t,n;
    cin>>t;

    while(t--){
        cin>>n;

        string grid[n];

        for(int i=0;i<n;i++){
            cin>> grid[i];
            sort(grid[i].begin(), grid[i].end());   
        }
        bool result = true;
        for(int i=0;i<n;i++){
            // if()
            for(int j=0;j<n-1;j++){
                if(grid[j][i]<=grid[j+1][i]){
                    result = true;
                }
                else{
                    result = false;
                    i = n;
                    break;
                }
            }
        }
        cout<<(result?"YES":"NO")<<endl;
        
    }
 
    // cout<<n<<endl;
 
 
    return 0;
}

// 3
// 3
// abc
// lmp
// qrt
// 3
// mpxz
// abcd
// wlmf
// 4
// abc
// hjk
// mpq
// rtv