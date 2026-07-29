class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>r{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        
    int n=s.size();
    int ans=0;
    for(int i=0;i<n;i++){
        int curr=i;
        int next=i+1;
        if(next<n){
            if(r[s[curr]]>r[s[next]]){
                 ans+=r[s[curr]];
            }else if(r[s[curr]]<r[s[next]]){
                ans-=r[s[curr]];
            }else{
            ans+=r[s[curr]];
        }
        }else{
            ans+=r[s[curr]];
        }
    }
    return ans;
    }
};