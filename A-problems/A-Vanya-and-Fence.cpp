#include <iostream>

using namespace std;

int main()
{
    int n, h;
    int personHeight;
    int minWidth = 0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>personHeight;
        if(personHeight > h)
            minWidth += 2;
        else
            minWidth +=1;
    }
    cout<<minWidth;
    return 0;
}
