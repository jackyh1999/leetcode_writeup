class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> score;
        int top = -1, sum = 0;
        for(int i=0;i<ops.size();i++){
            if(ops[i] == "+"){
                score.push_back( score[top]+score[top-1] );
                top++;
            }
            else if(ops[i] == "D"){
                score.push_back( score[top]*2 );
                top++;
            }
            else if(ops[i] == "C"){
                score.pop_back(); 
                top--;
            }
            else{
                score.push_back( stoi(ops[i]) );
                top++;
            }
        }
        for(int i=0;i<score.size();i++) sum += score[i];
        return sum;
    }
};