#include <iostream>

using namespace std;

int main()
{
    string word;
    cin>>word;
    int upper = 0, lower = 0;
    for(int i=0;i<word.size();i++){
        if(isupper(word[i])){
            upper += 1;
        } else{
            lower += 1;
        }
    }
    if(upper > lower) {
        for(int j = 0; j<word.size(); j++){
             cout<<static_cast< char >(toupper(word[j]));
        }
    } else{
        for(int k = 0; k< word.size(); k++){
            cout<<static_cast< char >(tolower(word[k]));
        }
    }
    return 0;
}
