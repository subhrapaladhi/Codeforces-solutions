vector<vector<int>> listofCombinations;

vector<vector<int>> combinationSum(vector<int> candidates, int target){
    vector<int> combination;
    generateCombinations(candidates,combination,target,0, 0);
    return listofCombinations;
}

void generateCombinations(vector<int> candidates,vector<int> combination, int target, int sum, int startIndex){
    if(sum==target){
        listofCombinations.push_back(combination);
        return ;
    } else if(sum>target){
        return ;
    } else{
        for(int i=startIndex, i<candidates.size(); i++){
            combination.push_back(candidates[i]);
            generateCombinations(candidates,combination,target,sum+candidates[i],i);
            combination.erase(combination.end()-1);
        }
    }
}