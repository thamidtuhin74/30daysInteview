#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,k;
    cin>>n;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    string inputString;

    getline(cin, inputString);
    cin>>k;


    string outputStr = "";
    k = k%26;
    for(int i=0;i<n;i++){
        if((inputString[i] >= 65 && inputString[i]<= 90)||(inputString[i] >= 97 && inputString[i]<= 122)){
            // cout<<"Hello "<<endl;
            int ascValue = inputString[i];

            if((inputString[i] >= 65 && inputString[i]<= 90)){
                if((ascValue<= 90-k)){
                    ascValue = ascValue + k;
                    outputStr.push_back(static_cast<char>(ascValue));
                }
                else{
                    ascValue = 65 + (ascValue+k-1-90);
                    outputStr.push_back(static_cast<char>(ascValue));
                }
            }
            else{
                if((ascValue<= 122-k)){
                    ascValue = ascValue + k;
                    outputStr.push_back(static_cast<char>(ascValue));
                }
                else{
                    ascValue = 97 + (ascValue+k-1-122);
                    outputStr.push_back(static_cast<char>(ascValue));
                }
            }    
        }else{
            outputStr.push_back(inputString[i]);  
        }
    }

    cout<<outputStr<<endl;
 
 
    return 0;
}

// Input (stdin)
// 38
// Always-Look-on-the-Bright-Side-of-Life
// 5
// Expected Output
// Fqbfdx-Qttp-ts-ymj-Gwnlmy-Xnij-tk-Qnkj