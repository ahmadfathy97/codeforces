#include <iostream>

using namespace std;

int main()
{
    int y, w;
    cin>>y>>w;
    int x = 7 - (y > w ? y : w);
    if(x == 6){
        cout<<"1/1";
    } else if(x == 0){
        cout<<"0/1";
    } else if(6 % x == 0){
        cout<<1<<"/"<<6/x;
    } else if(x % 2 == 0){
        cout<<x/2<<"/"<<3;
    } else{
        cout<<x<<"/"<<6;
    }
    return 0;
}
