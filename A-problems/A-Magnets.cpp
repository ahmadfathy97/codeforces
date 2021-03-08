#include <iostream>

using namespace std;

int main()
{
    int num;
    string xmagnat = "none", magnat;
    int groupsOfMagnets = 0;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>magnat;
        if(num == 1){
          groupsOfMagnets = 1;
          break;
        }
        if(xmagnat != "none"){
            if(xmagnat[1] == magnat[0])
                groupsOfMagnets += 1;
        } else {
            groupsOfMagnets += 1;
        }
        xmagnat = magnat;

    }
    cout <<groupsOfMagnets<< endl;
    return 0;
}
