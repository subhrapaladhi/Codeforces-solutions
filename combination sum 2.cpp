// https://leetcode.com/problems/combination-sum-ii/

vector<vector<int>> listofCombinations;

vector<vector<int>> combinationSum2(vector<int> candidates, int target){
    vector<int> combination;
    sort(candidates.begin(),candidates.end());

    findCombinations(candidates, target, 0, combination, 0);

    return listofCombinations;
}

void findCombinations(vector<int> candidates, int target, int sum, vector<int> combination, int startIndex){
    if(target == sum){
        listofCombinations.push_back(combination);
        return;
    }

    for(int i=startIndex; i<candidates.size(); i++){
        if(i>startIndex && candidates[i]==candidates[i-1]){
            continue;
        } else if (sum<=target){
            combination.push_back(candidates[i]);
            findCombinations(candidates,target,sum+candidates[i],combination,i);
            combination.erase(combination.end()-1);
        } else {
            return;
        }
    }
}