#include <iostream>

using namespace std;

int main()
{
    int numOfGames, Anton = 0, Danik = 0;
    string gameOutcome;
    cin>>numOfGames>>gameOutcome;
    for(int i=0;i<numOfGames;i++){
        if(gameOutcome[i] == 'A')
            Anton += 1;
        else if(gameOutcome[i] == 'D')
            Danik += 1;
    }
    if(Anton > Danik)
        cout<<"Anton"<<endl;
    else if(Anton < Danik)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
