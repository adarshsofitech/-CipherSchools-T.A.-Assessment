#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

/* <---------------------------Code-here-------------------------> */


int main()
{
    int n;
    cin >> n;
    vector<int>ar(n);
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    
    vector<int>dp(n,0);
    if(n>=0)
    dp[0] = ar[0];
    if(n>=1)
    dp[1] = max(dp[0],ar[1]);
    if(n>=2)
    dp[2] = dp[0] + ar[2];

    for(int i=3;i<n;i++){
        dp[i] = max(dp[i-1],dp[i-2]+ar[i]);
    }
    cout << max(dp[n-1],dp[n-2]) << endl;
    return 0;
}