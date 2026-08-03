class Solution {
public:
    bool isEqual(int freq[],int freq1[]){
        for(int i=0;i<26;i++){
            if(freq[i]!=freq1[i]){

                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.length();i++){
            int idx=s1[i]-'a';
            freq[idx]++;
        }
        int windowsize=s1.length();
        for(int i=0;i<s2.length();i++){
        int freqwind[26]={0};

            int windidx=0;
            int idx=i;
            while(windidx<windowsize && idx<s2.length()){
                freqwind[s2[idx]-'a']++;
                windidx++;
                idx++;
            }
            if(isEqual(freq,freqwind)){
                return true;
            }
        }
        return false;
    }
};