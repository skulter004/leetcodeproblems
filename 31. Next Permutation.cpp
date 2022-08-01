
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int indx1=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                indx1=i;
                break;
            }
        }
        
        if(indx1==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            int indx2=-1;
            for(int i=nums.size()-1;i>=indx1;i--){
                if(nums[i]>nums[indx1]){
                    indx2=i;
                    break;
                }
            }
            swap(nums[indx2],nums[indx1]);    
            reverse(nums.begin()+indx1+1,nums.end());
        }
    
    }
};
