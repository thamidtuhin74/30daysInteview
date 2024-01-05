#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d,m;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cin>>d;
    cin>>m;
    int result=0;
    for(int i=0;i<n;i++){
        if(s[i]+s[i+1]==d){
            result++;
            i++;
        }
        if(i==n-1 && s[i]==d){
            result++;
        }
    }
    cout<<result<<endl;
 
 
    return 0;
}