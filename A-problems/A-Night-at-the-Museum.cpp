#include <iostream>

using namespace std;

int main()
{
    string s;
    int moves = 0;
    cin>>s;
    char xChar = 'a';
    for(int i=0; i<s.size(); i++){
        if(s[i] > xChar){
            if(s[i] - xChar > 13){
                moves += 26 - (s[i] - xChar);
            } else{
                moves += s[i] - xChar;
            }
        } else{
            if(xChar - s[i] > 13){
                moves += 26 - (xChar - s[i]);
            } else{
                moves += xChar - s[i];
            }
        }
        xChar = s[i];
    }
    cout <<moves<< endl;
    return 0;
}
