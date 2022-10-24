#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[1001] = {0};
    int dp[1001] = {0};
    
    for(int i=1;i<=n;i++) cin >> arr[i];
    
    for(int i=1;i<=n;i++)for(int j=1;j<=i;j++)dp[i] = dp[i] > dp[i-j]+arr[j] ? dp[i] : dp[i-j]+arr[j];
            
    cout << dp[n];
}