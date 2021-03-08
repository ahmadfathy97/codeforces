#include <iostream>

using namespace std;

int main()
{
    string a,b;
    int result = 0;
    cin>>a>>b;
    for(int i=0; i<a.size(); i++){
        if(tolower(a[i]) > tolower(b[i]) ){
            result = 1;
            break;
        } else if(tolower(a[i]) < tolower(b[i])){
            result = -1;
            break;
        }
    }
    cout<<result;
    return 0;
}
