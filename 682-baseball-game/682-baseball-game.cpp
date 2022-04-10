class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> record;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C") record.erase(record.end()-1);
            else if(ops[i]=="D"){record.push_back(2*record[record.size()-1]);}
            else if(ops[i]=="+") record.push_back(record.back()+record[record.size()-2]);
            else record.push_back(stoi(ops[i]));
        }
        long long sum=0;
        //cout<< record[2];
        for(auto x:record)sum+=x;
        return sum;
    }
};