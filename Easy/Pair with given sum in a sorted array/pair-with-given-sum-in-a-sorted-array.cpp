//{ Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        //use two pinter approach
        int ans =0, flag = 0, i = 0, j= n-1;
        while(i<j){
            if(arr[i] + arr[j] == sum){
                i++;
                j--;
                ans++;
                flag = 1;
            }
            else if(arr[i] + arr[j] > sum){
                j--;
            }
            else{
                i++;
            }
            
        }
        if(flag){
            return ans;
        }
        return -1;
    
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends