#include <bits/stdc++.h>
using namespace std;
void primefactors(int n){
    while(n % 2 == 0){
        cout << 2 << " ";
        n /= 2;
    }
    for(int i = 3; i * i <= n; i += 2){
        while(n % i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    if(n > 2)
        cout << n << endl;
}
int main(){
    int n;
    cin >> n;
    primefactors(n);
    return 0;
}
