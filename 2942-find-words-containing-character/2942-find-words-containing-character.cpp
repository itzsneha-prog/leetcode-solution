class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i=0;i<words.size();i++){
            bool occur=false;
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==x){
                    occur=true;
                    break;
                }
                
            }
            if(occur==true){
                    ans.push_back(i);
                }
        }
        return ans;
    }
};