#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int num;
    for(int i=0;i<n; i++){
        cin>> num;
        arr[i] = num;
    }
    sort(arr, arr+n);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<"";
    }
    return 0;
}
