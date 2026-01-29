#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    for (int i = 0; i < 8; i++) {
        cin >> s[i];   
    }
    int x;
    for(int i=0;i<8;i++){
        if(s[i]!='.'){
            x=i;
            break;
        }
    }
    string ans;
    for(int i=x;i<8;i++){
        if(s[i]!='.'){
            ans+='s[i]';
        }
        else{
            break;
        }
    }
    cout<<ans<<"\n";
}
