class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map <char,int > umap;
        int count =0;
        for(auto x:s){
            umap[x]++;
        }
        int flag=1;
        //for(auto itr=umap.begin();itr!=umap.end();itr++){
          for(auto x:umap){
              if(x.second%2==0) count+=x.second;
              else if(flag){ count+=x.second; flag=0; }
              else{ count+=x.second-1; }
        }
        return count;
    }
};