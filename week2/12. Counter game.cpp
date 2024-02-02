#include<bits/stdc++.h>
using namespace std;

// void notPowerOf2(long long int n, int count){
//     count++;
//     long long int newX = n>>1;
//     // n = newX+1;
    
//     if (n == 1) {
//         if (count % 2 == 0) {
//             cout << "Richard" << endl;
//         } else {
//             cout << "Louise" << endl;
//         }
//     } else {
//         notPowerOf2(n, count);
//     }
//     cout<<""<<endl;
// }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        long long int n;
        int noOfbit;
        cin>>n;
        noOfbit = log2(n)+1;
        int count = 0;
        // if(noOfbit%2==0){
        //     cout<<"Richard"<< noOfbit<<endl;
        // }else{
        //     cout<<"Louise"<< noOfbit<<endl;

        // }

        // if(noOfbit==1){
        //     cout<<"Richard"<<endl;
        // }
        // else{
        //     int x = n & (n-1);
        //     if(x==0){
        //         if(noOfbit%2==0){
        //             cout<<"Richard"<<endl;
        //         }else{
        //             cout<<"Louise"<<endl;
        //         }
        //     }
        //     else{
        //         notPowerOf2(n, count);
                
        //     } 
        // }

            int x = n & (n-1);
        if(x == 0){
            cout<<"Power of 2"<<endl;

            }
        else{
            cout<<"Not Power of 2"<<endl;
            int newX = n>>1;
            cout<<"New X: "<<newX<<endl;
            cout<<"n - newX : "<<(n - newX)-newX<<endl;



            }
    }
 
 
    return 0;
}