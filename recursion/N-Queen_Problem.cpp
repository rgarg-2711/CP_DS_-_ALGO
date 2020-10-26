/*
PROBLEM:You are given N, and for a given N x N chessboard, find a way to place N queens such that no queen can attack any other queen on the chess board. A queen can be killed when it lies in the same row, or same column, or the same diagonal of any of the other queens. You have to print all such configurations.
Input Format :
Line 1 : Integer N
Output Format :
One Line for every board configuration. 
Every line will have N*N board elements printed row wise and are separated by space
Note : Don't print anything if there isn't any valid configuration.
Constraints :
1<=N<=10
Sample Input 1:
4
Sample Output 1 :
0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0 
0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0 
*/

#include<iostream>
using namespace std;
#include "Solution.h"
bool place(int output[10][10],int row,int col,int n)
{
    int count=1;
    for(int i=row-1;i>=0;i--)
    {
        if(output[i][col])
            return false;
        else if((col-count)>=0&&output[i][col-count])
            return false;
        else if((col+count)<n&&output[i][col+count])
            return false;
        count++;
    }
    return true;
}
void print(int output[10][10],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<output[i][j]<<" ";
        }
    }
    cout<<'\n';
}
void solve(int output[10][10],int n,int row)
{
    
    if(row>=n)
    {
        print(output,n);
        return;
    }
    int col=0;
    for(;col<n;col++)
    {
        if(place(output,row,col,n))
        {
             output[row][col]=1;
        solve(output,n,row+1);
        }
           
        output[row][col]=0;
    }
    return;
}
void placeNQueens(int n){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Print output as specified in the question
  */
    int output[10][10]={0};
    solve(output,n,0);
    return;


}

int main(){

  int n; 
  cin >> n ;
  placeNQueens(n);

}


