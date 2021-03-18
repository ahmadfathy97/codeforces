#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string password;
    for(int j=0;j<n;j++){
        password += static_cast<char>('a'+(j%k));
    }
    cout<<password;
    return 0;
}
