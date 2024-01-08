// take var coutn to keep the track of elements rem
// loop throught the array 
// if curr element is not equal to val copy it to the position of val
// if equal no action 

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int n =nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[count++]=nums[i];
            }
        }
        return count;
    }
};
