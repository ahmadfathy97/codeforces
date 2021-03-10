#include <iostream>
using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    int minShovels = 1;
    while(true){
        if((minShovels * k - r) % 10 == 0 || (minShovels * k) % 10 == 0){
            break;
        }
        minShovels++;
    }
    cout<<minShovels;
    return 0;
}
