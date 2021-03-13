#include <iostream>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int result = 0;
    for(int i =0;i<t.size();i++){
        if(s[result] == t[i])
            result += 1;
    }
    cout<<result + 1;
    return 0;
}
