#include <iostream>
// #include <set>

using namespace std;

int main()
{
    string sheOrHe;
    cin>> sheOrHe;
    //----
    vector<char>distinctChars;
    for(int i=0;i<sheOrHe.size();i++){
        bool notFound = true;
        for(int j=0;j<distinctChars.size();j++){
            if(sheOrHe[i] == distinctChars[j]){
                notFound = false;
                break;
            }
        }
        if(notFound)
            distinctChars.push_back(sheOrHe[i]);
    }
    //-----

    // memory 200 kb
    // set<char>distinctChars;
    // for(int i=0;i<sheOrHe.size();i++){
    //     distinctChars.insert(sheOrHe[i]);
    // }

    if(distinctChars.size() % 2 == 0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}
