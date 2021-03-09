#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int cards[num];
    int Sereja = 0, Dima = 0;
    int left = 0;
    int right = num -1;
    for(int i=0;i<num;i++){
        int x;
        cin>>x;
        cards[i] = x;
    }

    for(int i =0; i<num; i++){
        if(i % 2 == 0){
            if(cards[left] > cards[right]){
                Sereja += cards[left];
                left += 1;
            }
            else{
                Sereja += cards[right];
                right -= 1;
            }
        } else {
            if(cards[left] > cards[right]){
               Dima += cards[left];
               left += 1;
            }

            else {
                Dima += cards[right];
                right -= 1;
            }
        }
    }
    cout<<Sereja<<" "<<Dima;
    return 0;
}
