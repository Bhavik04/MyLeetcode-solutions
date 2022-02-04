class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map <char,int> count;
        map <char,int> :: iterator it;
        int c=0;
          
        for(int 
            
           i=0;i<stones.length();i++){
       if(count.count(stones[i])) {
     it =count.find(stones[i]);
           it->second=it->second+1;
         
        }  
          else
          count.insert({stones[i],1});
        }
          
          for(int i=0; i<jewels.length();i++){
              it=count.find(jewels[i]);
              if(it!=count.end())
                c+=it->second;
               
          }
        return c;
    }
};