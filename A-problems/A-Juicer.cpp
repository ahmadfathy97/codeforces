#include <iostream>
using namespace std;

int main()
{
    int n,d,b,num = 0;
    cin>>n>>b>>d;
    int oranges[n];
    int squezed = 0;
    for(int j=0;j<n;j++){
        cin>>oranges[j];
        if(oranges[j] <= d && oranges[j]<= b){
            squezed += oranges[j];
            if(squezed > d){
                squezed = 0;
                num += 1;
            }
        }
    }
    cout<< num;
    return 0;
}
