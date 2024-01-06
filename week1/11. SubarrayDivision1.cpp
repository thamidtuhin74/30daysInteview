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
    if(n==1 && s[0]==d){
        result++;
    }
    int sum;
    for(int i=0;i<n-1;i++){
        sum = s[i];
        for(int j=i+1;j<=i+m-1;j++){
            sum += s[j];    
        }
        if(sum==d){
                result++;
                sum = 0;
            }
    }
    cout<<result<<endl;
 
 
    return 0;
}