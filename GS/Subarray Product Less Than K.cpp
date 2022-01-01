class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
     int ans = 0,n=nums.size();
        int left=0,right=0;
        int product =1;
        while(right<n){
            product = product*nums[right]; // adding the new elemnt in the product 
            
            while(product>=k) product/=nums[left++]; // now if the prd is grater or equal than k then move the left pointer and devide the value form the prd
            
            ans  += 1 + (right-left); // if prd is less than k then add the possiable output to the ans 
            right++; //move the right pointer
        }
        return ans;
    }
};