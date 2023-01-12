//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  const long long mod = 1e9+7;
    long long int nthFibonacci(long long int n) {
        //prestoring
        long long int dp[n+5];
        //initializing dp[0] as 0
        dp[0]=0;
        //initializing dp[1] as 1
        dp[1]=1;
        for(int i=2;i<=n;i++){
            //as same as fibonacci formula f(i)=f(i-1)+f(i-2)
            dp[i]=(dp[i-1]%mod + dp[i-2]%mod)%mod;
        }
        //returning nth value
        return dp[n];

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends