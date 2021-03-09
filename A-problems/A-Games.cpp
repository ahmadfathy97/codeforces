#include <iostream>

using namespace std;

int main()
{
    int games;
    cin>> games;
    string teamsColors[games][2];
    int result = 0;
    for(int i=0;i<games;i++){
        cin>>teamsColors[i][0];
        cin>>teamsColors[i][1];
    }
    for(int j=0;j<games;j++){
        for(int k=0;k<games;k++){
            if(j != k && teamsColors[j][0] == teamsColors[k][1]){
                result +=1;
            }
        }
    }
    cout<< result;
    return 0;
}
