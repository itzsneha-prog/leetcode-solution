class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        for(int i=0;i<operations.size();i++){
            if(operations[i][0]!='+'
            && operations[i][0]!='C'
            && operations[i][0]!='D'){
                int m=stoi(operations[i]);
                s.push(m);
            }else if(operations[i][0]=='+'){
                int count=0;
                int sum=0;
                vector<int>temp;
                while(count<2){
                    sum+=s.top();
                    temp.push_back(s.top());
                    s.pop();
                    count++;
                }
                int n=temp.size()-1;
                for(int i=n;i>=0;i--){
                    s.push(temp[i]);
                }
                s.push(sum);
            }else if(operations[i][0]=='D'){
                int m=2*s.top();
                s.push(m);
            }else{
                s.pop();
            }
        }
        int ansSum=0;
        while(!s.empty()){
            ansSum+=s.top();
            s.pop();
        }
        return ansSum;
    }
};