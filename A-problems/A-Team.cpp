#include <iostream>

using namespace std;

int main()
{
    int Petya, Vasya, Tonya, problems;
    cin>>problems;
    int implementationProbs = 0;
    for(int i=0;i<problems;i++){
        // I can make loop here rather than this
        cin>>Petya;
        cin>>Vasya;
        cin>>Tonya;
        if(Petya + Vasya + Tonya > 1)
            implementationProbs += 1;
    }

    cout<< implementationProbs;
    return 0;
}
