 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        int max_sum=arr[0];
        int curr_sum=max_sum;
        for(int i=1; i<n; i++)
        {
            curr_sum=max(curr_sum+arr[i], arr[i]);
            max_sum=max(curr_sum, max_sum);
        }
        return max_sum;
    }
};
