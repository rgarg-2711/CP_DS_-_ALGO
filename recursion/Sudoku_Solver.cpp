/*
PROBLEM:Given a 9*9 sudoku board, in which some entries are filled and others are 0 (0 indicates that the cell is empty), you need to find out whether the Sudoku puzzle can be solved or not i.e. return true or false.
Input Format :
9 Lines where ith line contains ith row elements separated by space
Output Format :
 true or false
Sample Input :
9 0 0 0 2 0 7 5 0 
6 0 0 0 5 0 0 4 0 
0 2 0 4 0 0 0 1 0 
2 0 8 0 0 0 0 0 0 
0 7 0 5 0 9 0 6 0 
0 0 0 0 0 0 4 0 1 
0 1 0 0 0 5 0 8 0 
0 9 0 0 7 0 0 0 4 
0 8 2 0 4 0 0 0 6
Sample Output :
true

*/
#include<iostream>
using namespace std;
#include "Solution.h"
bool possible(int board[][9],int row,int col,int num)
 {
  for(int i=0;i<9;i++)
  {
    if(board[row][i]==num)
      return false;
  }
  for(int i=0;i<9;i++)
  {
    if(board[i][col]==num)
      return false;
  }
  int r=row-(row%3);
  int c=col-(col%3);
  for(int i=r;i<(r+3);i++)
  {
    for(int j=c;j<(c+3);j++)
    {
      if(board[i][j]==num)
       return false;
    }
  }
  return true;
 }
bool sudokuSolver(int board[][9]){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print output and return output as specified in the question
  */
int row=0,col,f=0;
  for(;row<9;row++)
  {
    for(col=0;col<9;col++)
    {
      if(board[row][col]==0)
      {
        f=1;
        break;
      }
      
    }
    if(f==1)
      break;
  }
  if(f==0)
  {
    //cout<<"hello";
    return true;
  }
  for(int i=1;i<=9;i++)
  {
    if(possible(board,row,col,i))
    {
      board[row][col]=i;
      if(sudokuSolver(board))
        return true;
      board[row][col]=0;
    }
  }
return false;

}

int main(){

  int n = 9; 
  int board[9][9];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> board[i][j];
        }		
  }
  if(sudokuSolver(board)){
	cout << "true";	
  }else{
	cout << "false";	
  }
}


