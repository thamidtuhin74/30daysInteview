#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    int n,h;
    while (t>0)
    {
        cin>>n>>h;

        if(n%2==1 || h==1){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
        t--;
    }
    
 
    return 0;
}
