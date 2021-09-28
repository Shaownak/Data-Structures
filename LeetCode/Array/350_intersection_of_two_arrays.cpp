class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        map<int, int>contains;
        for(int i=0; i<nums2.size(); i++){
            contains[nums2[i]]++;
        }
        for(int i=0; i<nums1.size(); i++){
            if(contains[nums1[i]] && --contains[nums1[i]]>=0){
                res.push_back(nums1[i]);
            }
        }
        return res;
    }
};
