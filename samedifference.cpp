#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string str;
        cin >> str;  
        int count = 0;

        for(int i = n - 1; i > 0; i--){   
            if(str[i] != str[i - 1]){
                str[i - 1] = str[i];
                count++;
            }
        }

        cout << count << "\n";
    }
}
