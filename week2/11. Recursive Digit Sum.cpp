#include<bits/stdc++.h>
using namespace std;

void calculation(long long int sum){
    string charSum = to_string(sum);
    int newSum = 0;
    for(__SIZE_TYPE__ i=0;i<charSum.length();i++){
        newSum = newSum + (charSum[i]-'0');
        // cout<<"newSum = "<<newSum<<endl;

    }
    sum = newSum;
    
    if(sum>9){
        calculation(sum);
    }
    else{
        // return sum;
        cout<<sum<<endl;

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    int k;
    cin>>n>>k;

    long long int sum=0;

    for(__SIZE_TYPE__ i=0;i<n.length();i++){
        int x = n[i]-'0';
        // cout<<"x = "<<x<<endl;
        sum+= x;
    }
    sum  = sum * k;

    if(sum>9){
        calculation(sum);
        // cout<<"Function : "<<calculation(sum)<<endl;

    }
    else{
        // cout<<"Without Function : "<<sum<<endl;
        cout<<sum<<endl;

    }
 
    return 0;
}