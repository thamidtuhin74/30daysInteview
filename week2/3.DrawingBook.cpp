#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,p;
    cin>>n>>p;

    int front = p/2;
    int back = (n-p)/2;

    (n%2==0)?(back += p%2):(back +=0);

    
    if(front>=back){
        cout<<back<<endl;
    }else{
        cout<<front<<endl;
    }
    return 0;
}