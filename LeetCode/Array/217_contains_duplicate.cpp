class Solution {
public:
    bool containsDuplicate(vector<int>num){
        sort(num.begin(), num.end());
        for(int i=1; i<=num.size()-1; i++){
            if(num[i-1]==num[i]){
                return true;
            }
        }
        return false;
    }
};
