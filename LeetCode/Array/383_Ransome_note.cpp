class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int>m;
        map<char, int>n;
        for(int i=0; i<magazine.length(); i++){
            m[magazine[i]]++;
        }
        
        for(int i=0; i<ransomNote.length(); i++){
            n[ransomNote[i]]++;
        }
        
        for(int i=0; i<ransomNote.length(); i++){
            if(m[ransomNote[i]]<n[ransomNote[i]]) return false;
        }
        return true;
    }
};
