#include <iostream>

using namespace std;

int main()
{
    int events;
    cin>> events;
    int policeForce = 0;
    int crimes = 0;
    int unSolvedCrimes = 0;
    int x;
    for(int i=0; i<events; i++){
        cin>>x;
        if(x == -1 && policeForce == 0)
            unSolvedCrimes +=1;
        else if(x == -1 && policeForce >= 0)
            policeForce -=1;
        else if(x > -1)
            policeForce += x;

    }
    cout<<unSolvedCrimes;
    return 0;
}
