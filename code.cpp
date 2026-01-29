#include <iostream>
using namespace std;

int main(){
    string s;
    int X, Y;
    cin >> s;   
    cin >> X >> Y;

    int hours = (s[0]-'0')*10 + (s[1]-'0');
    int minutes = (s[3]-'0')*10 + (s[4]-'0');

    int new_hours = hours;
    int new_minutes = minutes + 1;

    if(new_minutes == 60){
        new_minutes = 0;
        new_hours++;
        if(new_hours == 13) new_hours = 1; 
    }

    s[0] = (new_hours / 10) + '0';
    s[1] = (new_hours % 10) + '0';
    s[3] = (new_minutes / 10) + '0';
    s[4] = (new_minutes % 10) + '0';

    cout << s << endl;

    return 0;
}
