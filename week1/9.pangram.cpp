#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string str;
    bool pangram[123] = {false}; 
    getline(cin,str);

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // int j =0;
    
    for(int i=0;i<str.length();i++){
        if((str[i]>=97 && str[i]<=122)||(str[i]==' ')){
            pangram[str[i]] = true;
            // j++;
        }
    }

    bool fasleCunt = false;
    for(int i=32;i<123;i++){
        if((i>=97 && i<=122)||(i==32)){
            if(pangram[i] == !true){
                fasleCunt = true;
                break;
            }
        }
        
    }
    if(!fasleCunt){
        cout<<"pangram"<<endl;
    }
    else{
        cout<<"not pangram"<<endl;
    }
 
    return 0;
}