#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long MOD = 1e9 + 7;

    vector<long long> dp(n + 1, 0);

    
    dp[0] = 1;  
    if (n >= 1) dp[1] = 1;  
    if (n >= 2) dp[2] = 2;  
   

    
    for (int i = 3; i <= n; i++) {
        for(int j = 0 ; j<= 6 ; j++){
            if(i - j >= 0){
                dp[i]  += dp[i-j]  % MOD  ; 
            }
        }
    }


    cout << dp[n] % MOD << endl;

    return 0;
}