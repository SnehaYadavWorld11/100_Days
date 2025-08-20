class Solution {
public:
    void findCombinationSum(vector<vector<int>>& result,vector<int>& candidates, int target,int index,vector<int> temp,int n){
        if(index==n){
            if(target==0){
                result.push_back(temp);
            }
            return ;
        }
        if(candidates[index]<=target){
            temp.push_back(candidates[index]);
            findCombinationSum(result,candidates,target-candidates[index],index,temp, n);
            temp.pop_back();
        }

        findCombinationSum(result,candidates,target,index+1,temp, n);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        int n=candidates.size();
        vector<vector<int>> result;
        findCombinationSum(result,candidates,target,0,temp,n);
        return result;
    }
};