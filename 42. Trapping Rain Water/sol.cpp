// initialize the left right maxL,maxR and res as 0
// loop it till left<=right
// check if a[left] <= a[right] ---> (left building is bigger than rightmost building)
// if so check if a[left]>= maxL, update the maxL as a[left] ---> (check if the current building is the highest building in the left)
// else store the value in res i.e. we are storing the water (res += maxL-a[left]) 
// increment the left pointer
// if the 2nd step fails we check for right poiner i.e. a[right]>=maxR
// if so update maxR with a[right]
// else store the value in res i.e sore water res += maxR-a[right]
// dercrement of right pointer
// return the answer 

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left=0;
        int right =n-1;
        int maxL=0;
        int maxR=0;
        int res=0;

        while(left<=right){
            if(height[left]<=height[right]){
                if(height[left]>=maxL) 
                maxL= height[left];
                else
                res+= maxL-height[left];
                left++;
            }
            else{
                if(height[right]>=maxR)
                maxR=height[right];
                else
                res+=maxR-height[right];
                right--;
            }
        }
        return res;
    }
};
