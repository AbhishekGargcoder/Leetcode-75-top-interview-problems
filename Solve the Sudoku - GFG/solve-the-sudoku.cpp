//{ Driver Code Starts
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
    bool isPossible(int key,int grid[N][N],int r,int c){
        for(int i=0;i<9;i++)
           if(grid[i][c]==key or grid[r][i]==key) return false;
        int row = r - (r)%3;
        int col = c - (c)%3;
        for(int i=row;i<row+3;i++)
          for(int j=col;j<col+3;j++)
            if(grid[i][j]==key) return false;
        return true;
    }
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        int r = -1,c=-1;
        for(int i=0;i<9;i++)
           for(int j=0;j<9;j++)
              if(grid[i][j]==0){
                  r=i, c=j;break;}
        if(r==-1) return true;
        for(int i=1;i<=9;i++){
            if(isPossible (i,grid,r,c)){
                grid[r][c]= i;
                if(SolveSudoku(grid)) return true;
                grid[r][c]=0;
            }
            
        }
        return false;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        for(int i=0;i<9;i++)
           for(int j=0;j<9;j++)
             cout<<grid [i][j]<<" ";
    }
};

//{ Driver Code Starts.

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
}
// } Driver Code Ends