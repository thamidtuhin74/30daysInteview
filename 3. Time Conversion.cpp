#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string Input;
    getline(cin, Input);
    // cout<<Input<<endl;
    int hour = stoi(Input.substr(0,2));
    string middle = Input.substr(2,6);
    string extention = Input.substr(8,2);
    if(extention == "AM"){
        if(hour>=12)
            hour -= 12;         
    }
    else{
        if(hour<12)
            hour += 12;
    }
    // string fromedHour = to_string(hour);
    // ostringstream oss;
    // oss<<setw(2)<< setfill('0') << to_string(hour)<<endl;
    // string fromedHour = oss.str();
    // string Output = fromedHour.append(middle);

    // cout<<Output<<endl;
    
    cout<<setw(2)<< setfill('0') << to_string(hour)<<middle<<endl;
 
 
    return 0;
}
