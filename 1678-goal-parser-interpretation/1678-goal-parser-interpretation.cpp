class Solution {
public:
    string interpret(string command) {
        string ans;string s="al";
        for(int i=0;i<command.size();i++){
            if(command[i]=='G') ans.push_back('G');
            else if(command[i]=='(' && command[i+1]==')' ){ans.push_back('o');i++;}
            else if(command.substr(i,4)=="(al)") {ans=ans+s;i+=3;}
        }
        return ans;
    }
};