/*
PROBLEM:You are given a N*N maze with a rat placed at maze[0][0]. Find and print all paths that rat can follow to reach its destination i.e. maze[N-1][N-1]. Rat can move in any direc­tion ( left, right, up and down).
Value of every cell in the maze can either be 0 or 1. Cells with value 0 are blocked means rat can­not enter into those cells and those with value 1 are open.
Input Format
The first line of input contains an integer 'N' representing 
the dimension of the maze.
The next N lines of input contain N space-separated 
integers representing the type of the cell.
Output Format :
For each test case, print the path from start position to destination position and only cells that are part of the solution path should be 1, rest all cells should be 0.

Output for every test case will be printed in a separate line.
Note:
You do not need to print anything, it has already been taken care of. Just implement the given function.
Constraints:
0 < N < 11 0 <= Maze[i][j] <=1

Time Limit: 1sec
Sample Input 1 :
3
1 0 1
1 0 1
1 1 1
Sample Output 1 :
1 0 0 1 0 0 1 1 1 
Sample Output 1 Explanation :
Only 1 path is possible

1 0 0
1 0 0
1 1 1
Which is printed from left to right and then top to bottom in one line.

Sample Input 2 :
3
1 0 1
1 1 1
1 1 1
Sample Output 2 :
1 0 0 1 1 1 1 1 1 
1 0 0 1 0 0 1 1 1 
1 0 0 1 1 0 0 1 1 
1 0 0 1 1 1 0 0 1 
Sample Output 2 Explanation :
4 paths are possible which are printed in the required format.

*/

#include<iostream>
using namespace std;
#include "Solution.h"
int board[][21]={0};
bool possible(int maze[][20],int n,int row,int col)
{
    if(row<n&&row>=0&&col<n&&col>=0&&maze[row][col]==1&&board[row][col]==0)
        return true;
    return false;
}
void solve(int maze[][20],int n,int row,int col)
{
    board[row][col]=1;
    if(row==(n-1)&&col==(n-1))
    {
        //print;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<board[i][j]<<" ";
            }
        }
        cout<<endl;
        return;
    }
    if(possible(maze,n,row-1,col))
    {
     //   board[row-1][col]=1;
        solve(maze,n,row-1,col);
        board[row-1][col]=0;
    }
    if(possible(maze,n,row+1,col))
    {
      //   board[row+1][col]=1;
        solve(maze,n,row+1,col);
        board[row+1][col]=0;
    }
    if(possible(maze,n,row,col-1))
    {
     //   board[row][col-1]=1;
        solve(maze,n,row,col-1);
        board[row][col-1]=0;
    }
    if(possible(maze,n,row,col+1))
    {
        // board[row][col+1]=1;
        solve(maze,n,row,col+1);
        board[row][col+1]=0;
    }
    if(possible(maze,n,row+1,col-1))
    {
        
    }
    return;
}
void ratInAMaze(int maze[][20], int n){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Print output as specified in the question
  */
    if(maze[0][0]&&maze[n-1][n-1])
    {
        solve(maze,n,0,0);
    }
return;

}

int main(){

  int n; 
  cin >> n ;
  int maze[20][20];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> maze[i][j];
        }		
  }
  ratInAMaze(maze, n);
}


