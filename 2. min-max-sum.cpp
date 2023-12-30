#include <bits/stdc++.h> 
using namespace std;
int main(){
    // cout<<"Hello"<<endl;
    long arr[5];

    for(int i= 0; i<5;i++){
        scanf("%ld", &arr[i]);
    }
    sort(arr, arr+5);
    long minSum = 0;
    long maxSum = 0;
    long sum = 0;

    
    for(int i= 1; i<5-1;i++){
        sum+= arr[i];
    }
    printf("%ld ",sum+arr[0]);
    printf("%ld",sum+arr[4]);

    return 0;
}