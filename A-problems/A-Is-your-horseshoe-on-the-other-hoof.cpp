#include <iostream>
#include <set>
using namespace std;

int main()
{
    int color;
    set<int> colorsHeHas;
    for(int i=0;i<4;i++){
        cin>>color;
        colorsHeHas.insert(color);
    }
    cout<<4 - colorsHeHas.size();
    return 0;
}
