class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            if(freq.find(arr[i])==freq.end()){
                freq[arr[i]]=1;
            }else{
                freq[arr[i]]++;
            }
        }
        int answer=-1;

        for(auto it:freq){
            if(it.first==it.second){
            answer=max(answer,it.first);

            }
        }
        
        return answer;
    }
};