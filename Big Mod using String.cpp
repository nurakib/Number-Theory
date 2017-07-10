#include <bits/stdc++.h>
using namespace std;
long bigmod(string num, long m){
    long i, rem;
    for(i = 0, rem = 0; num[i]; i++){
        rem = rem * 10 + (num[i] - '0');
        rem = rem % m;
    }
    return rem;
}
int main(){
    long m;
    string s;
    cin >> s >> m;
    cout << bigmod(s, m) << endl;
    return 0;
}
