// #include<bits/stdc++.h>
// using namespace std;

// // string xor_calulation(string s,string t){
// //     cout<<"hello";
    
// // }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     string s,t;
//     cin>>s>>t;
//     int n = s.length();
//     // xor_calulation(s,t);
//     string result;
//     for(int i=0;i<n;i++){
//         if(s[i]==t[i]){
//             result += '0';
//             // cout<<'0';
//         }
//         else{
//             // cout<<'1';
//             result += '1';
            
//         }
//     }

//     cout<<result<<endl;
    

//     // cout<<"hi"<<endl;
 
 
//     return 0;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string strings_xor(string s, string t) {

    string res = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == t[i])
            res += '0';
        else
            res += '1';
    }

    return res;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << strings_xor(s, t) << endl;
    return 0;
}



