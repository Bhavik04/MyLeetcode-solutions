class Solution {
public:
    string intToRoman(int num) {
        map <int ,string> umap={
            {1000,"M"} , {900,"CM"},{500,"D"}, {400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}
        };
        
        string ans;
        map <int ,string > :: reverse_iterator itr;
        for(itr = umap.rbegin();itr!=umap.rend();itr++){
            while(num>=itr->first){
                ans+=itr->second;
                num-=itr->first;
            }
            
        }
        return ans;
      
        
    }
};