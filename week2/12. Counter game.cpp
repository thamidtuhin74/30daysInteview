#include<bits/stdc++.h>
using namespace std;

void notPowerOf2(unsigned long long int n, int count){
    if (n == 1) {
        if (count % 2 == 0) {
            cout << "Richard" << endl;
        } else {
            cout << "Louise" << endl;
        }
    }
    else{
        unsigned long long int bits = log2(n)+0;
        // n = newX+1;
        // cout << "n = " <<n<< endl;
        // cout << "count = " <<count<< endl;

        int x = n & (n-1);
        if(x==0){
            count += bits;
            if(count%2==0){
                cout<<"Richard"<<endl;
            }else{
                cout<<"Louise"<<endl;
            }
        }
        else{
            n = n - pow(2, bits);
            count++;
            // unsigned long long int newX = n>>1;
            notPowerOf2(n, count);   
        } 
    }
    

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n;
        int noOfbit;
        cin>>n;
        noOfbit = log2(n)+0;
        int count = 0;

        if(n==1){
            cout<<"Richard"<<endl;
        }else if(n==2){
            cout<<"Louise"<<endl;
        }
        else{
            int x = n & (n-1);
            if(x==0){
                if(noOfbit%2==0){
                    cout<<"Richard"<<endl;
                }else{
                    cout<<"Louise"<<endl;
                }
            }
            else{
                notPowerOf2(n, count);
                
            } 

        }

    }
 
 
    return 0;
}