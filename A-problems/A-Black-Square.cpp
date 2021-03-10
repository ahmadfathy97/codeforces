#include <iostream>

using namespace std;
int main()
{
    int strips[5];
    int calories = 0;
    for(int i=1;i<5;i++){
        cin>>strips[i];
    }

    string s;
    cin>>s;

    for(int j=0;j<s.size();j++){
        calories += strips[s[j] - '0'];
    }
    cout<< calories;
    return 0;
}
