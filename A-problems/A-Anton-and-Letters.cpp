#include <iostream>
#include <set>
using namespace std;

int main(){
    set<char>letters;
    char x;
    while(cin>>x){
        if(x == '{' || x == ' ' || x == ',')
            continue;
        if(x == '}')
            break;
        letters.insert(x);
    }
    cout<<letters.size();
return 0;
}
