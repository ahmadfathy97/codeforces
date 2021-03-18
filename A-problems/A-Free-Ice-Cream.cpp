#include <iostream>

using namespace std;

int main()
{
    long long int d,n,x,z=0;
    cin>>x>>d;
    char sign;
    for(int i=0;i<x;i++){
        cin>>sign>>n;
        if(sign == '+')
            d += n;
        else
            if(n<=d)
                d -= n;
            else
                z += 1;

    }
    cout<<d<<" "<<z;
    return 0;
}
