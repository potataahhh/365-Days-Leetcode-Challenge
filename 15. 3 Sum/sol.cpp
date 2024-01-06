1// pehele ek resultant vector bna lo res k naam se 
// phir apne given vector ko sort krlo
// base conditon likh lo ki agr hmara element jo h vo 1st element h ya phir hmara curr element aur pichla element same h toh continue krte rho
// j pointer ko i+1 se initialize kr do
// k pointer ko array k last m fek do
// loop lga tb tk jb tk j chota h k se i.e j<k
// ek sum variable bnao jo store krega hmara elements ka sum i.e i+j+k; 
//agr sum 0 se chota h toh j badhao 
// agr sum 0 se bda h toh k ko kmm kro 
// agr ye dono condition nhi h toh bhyiii hmara triplet mil gya toh usse daal do ek temp vector m 
// ab hmme pta h ye jo triplet h vo ans vector m jayega toh use push_back maar do ans vector m 
// j++, k--  kyuki dono same nhi ho skte
// phir check kro ki khi j == j-1 toh nhi h agr h toh j++ kyuki hme same triplet mil jayega agr element same honge
// phir check kro ki khi k == k+1 toh nhi k agr h toh k-- kyuki hme same triplet mil jayega agr element same honge
// return ans


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int  n = nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1])
             continue;           // i is not the first element and not matches i-1
            int j=i+1;
            int k=n-1;

            while(j<k){                     
                int sum = nums[i]+nums[j]+nums[k];  
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k &&nums[k]==nums[k+1]) k--;
                }
            }
        }   
        return ans;
    }
};
