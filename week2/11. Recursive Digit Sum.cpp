#include<bits/stdc++.h>
using namespace std;

void calculation(int sum){
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
    string kTimesN;

    
    for(int i=0;i<k;i++){    
        kTimesN.append(n);
    }
    // cout<<kTimesN<<endl;

    int sum=0;

    for(__SIZE_TYPE__ i=0;i<kTimesN.length();i++){
        int x = kTimesN[i]-'0';
        // cout<<"x = "<<x<<endl;
        sum+= x;
    }
    // cout<<"Initial Sum = "<<sum<<endl;

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