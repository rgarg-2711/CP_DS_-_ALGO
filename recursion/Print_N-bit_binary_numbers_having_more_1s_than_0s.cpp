/*
PROBLEM:Given a positive integer N, the task is to find all the N bit binary numbers having more than or equal 1’s than 0’s for any prefix of the number.

Example 1:

Input:  N = 2
Output: 11 10
Explanation: 11 and 10 have more than 
or equal 1's than 0's

link:https://practice.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1


*/


class Solution{
public:	
void helper(int N,int one,string output,vector<string>&v)
{
  
	    if(N<=0)
	    {
	        v.push_back(output);
	       
	        return ;
	    }
	
	    helper(N-1,one+1,output+'1',v);
	    if(one>0)
	    {
	         helper(N-1,one-1,output+'0',v);
	   
	    }
	    
	   
	     return ;
}
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	   int one=0;

	   string output="";
	     vector<string>v;
	     helper(N,one,output,v);
	     return v;
	   
	}
};