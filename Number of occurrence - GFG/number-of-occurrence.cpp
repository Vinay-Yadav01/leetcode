//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
int firstsearch(int nums[],int n, int target) {
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(nums[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int lastsearch(int nums[],int n, int target) {
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(nums[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int first=firstsearch(arr,n,x);
	    int last=lastsearch(arr,n,x);
	    if(first==-1) return 0;
	    else return last-first+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends