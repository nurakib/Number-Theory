#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001
char prime[MAX];
void sieve(){
    prime[0] = prime[1] = 1;
    for(int i = 4; i <= MAX; i += 2)
        prime[i] = 1;
    for(int i = 3; i * i <= MAX; i += 2){
        if(prime[i] == 0){
            for(int j = i * i; j <= MAX; j += i)
                prime[j] = 1;
        }
    }
}
int main(){
    sieve();
    int n;
    cin >> n;
    if(prime[n] == 0) cout << n << " is a prime number." << endl;
    else cout << n << " is not a prime number." << endl;
    return 0;
}
