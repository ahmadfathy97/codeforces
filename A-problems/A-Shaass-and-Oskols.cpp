#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int birds[n];
    for(int i=0;i<n;i++){
        cin>>birds[i];
    }
    cin>>m;
    int left, right, x,y;
    for(int j =0;j<m;j++){
        cin>>y>>x;
        left = x - 1 ;
        right = birds[y-1] - x;
        if(y - 2 >= 0)
            birds[y-2] += left;
        if(y < n)
            birds[y] += right;
        birds[y - 1] = 0;
    }

    for(int b =0;b<n;b++)
        cout<<birds[b]<<" ";

    return 0;
}
