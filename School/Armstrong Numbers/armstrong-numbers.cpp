//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int temp = 0;
        int sum = 0;
        int original = n;
        while(n>0){
            temp = n%10;
            sum += pow(temp, 3);
            n = n/10;
            
        }
        if(sum == original){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends