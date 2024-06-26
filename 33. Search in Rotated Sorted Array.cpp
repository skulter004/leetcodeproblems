class Solution {
public:
    int search(vector<int>& nums, int target) {
        int front = 0;
        int rear = nums.size()-1;
        
        //single size array
        if(rear == front){
            if(nums[rear] == target) return rear;
            else return -1;
        }
        
        while(front <= rear){
            if(nums[front] == target) return front;
            if(nums[rear] == target) return rear;
            front++; rear--;
        }
        return -1;

    }
};
