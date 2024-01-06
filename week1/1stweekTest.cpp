#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            cout<<"FizzBuzz"<<endl;

        }
        else if(i%3==0 || i%5==0){
            string str = (i%3==0)?"Fizz":"Buzz";
            cout<<str<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
 
 
 
    return 0;
}