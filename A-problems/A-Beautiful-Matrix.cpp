#include <iostream>

using namespace std;

int main()
{
    int matrix[5][5];
    int num;
    int moves =0;
    bool endLoops = false;
    for(int i=0;i<5;i++){
        if(endLoops)
            break;
        for(int j=0;j<5;j++){
            cin>>num;
            if(num == 1){
                if(i - 2 < 0)
                    moves -= i - 2;
                else if(i - 2 > 0)
                    moves += i - 2;
                if(j - 2 < 0)
                    moves -= j - 2;
                else if(j - 2 > 0)
                    moves += j - 2;
                endLoops = true;
                break;
            }
        }
    }
    cout<<moves;
    return 0;
}
