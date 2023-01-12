//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int mod = 1e9 + 7;
		int nthPoint(int n){
		    // Code here
		    
		    int prev = 1;
		    int prev2 = 1;
		    
		    for(int i = 2;i<=n;i++){
		        int curr = (prev + prev2)%mod;
		        prev2 = prev;
		        prev = curr;
		    }
		    return prev;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends