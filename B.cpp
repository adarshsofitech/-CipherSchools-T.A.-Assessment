#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

/* <---------------------------Code-here-------------------------> */
void solve(vector<long long>ar,long long target){

    long long n = ar.size();
    sort(ar.begin(),ar.end());
    long long closest = INT_MAX;

    for(long long i = 0;i<ar.size()-2;i++){

        long long j = i+1, k = n-1;
        while(j < k){
            long long sum = ar[i] + ar[j] + ar[k];
            if(sum == target){
                cout << sum <<endl;
                return;
            }
            if(abs(target-sum) < abs(target-closest)){
                closest = sum;
            }
            if(sum > target){
                k--;
            }else{
                j++;
            }
        }
    }
    cout << closest << endl;
}
int main()
{
    long long n,target;
    cin >> n >> target;
    vector<long long>ar(n);
    for(long long i=0;i<n;i++){
        cin >> ar[i];
    }
    solve(ar,target);
}