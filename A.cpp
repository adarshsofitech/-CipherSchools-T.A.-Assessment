#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

/* <---------------------------Code-here-------------------------> */

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]!=i){
            cout << i <<endl;
            break;
        }
    }
    return 0;
}