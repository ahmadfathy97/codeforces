#include <iostream>

using namespace std;

int main()
{
    int num;
    string colors;
    int minNum =0;
    cin>>num>>colors;
    for(int i=0;i<colors.size();i++){
        if(colors[i] == colors[i+1])
            minNum +=1;
    }
    cout<<minNum;
    return 0;
}
