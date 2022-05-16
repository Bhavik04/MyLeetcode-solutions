// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find a solved Sudoku.
    bool valid(int grid [N][N], int row, int col, int num){
        
        
        for(int i=0;i<9;i++){
            if(grid[row][i]==num)
            return false;
            
           if(grid[i][col]==num)
            return false;
        }
        
        
        
        
        
        
        
        for(int i=((row/3)*3);i<((row/3)*3)+3 ;i++){
            for(int j=((col/3)*3);j<((col/3)*3)+3 ;j++){
                if(grid[i][j]==num)return false;
            }
        }
        return true;
    }
    
    
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(grid[i][j]==0){
                    int t=0;
                    while(t<9){
                        //cout<<t;
                        t++;
                        if(valid(grid,i,j,t)){
                            grid[i][j]=t;
                           if(SolveSudoku(grid)) return true;
                           else grid[i][j]=0;
                           
                        }
                    }
                    return false;
                }
            }
        }
        
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        //SolveSudoku(grid);
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                
                 cout<<grid[i][j]<<" ";
            }
            
        }
        
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends