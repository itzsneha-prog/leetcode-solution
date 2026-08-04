class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        string s;
        for(int i=0;i<n;i++){
            int count=1;
            
            while(i<n-1 && chars[i]==chars[i+1]){
                count++;
                i++;
            }
            if(count==1){
                s.push_back(chars[i]);
            }else{
                s.push_back(chars[i]);
                s=s+to_string(count);
            }
        }    
        chars.clear();
        chars.assign(s.begin(),s.end());
        s.clear();
        return chars.size();
    }
};