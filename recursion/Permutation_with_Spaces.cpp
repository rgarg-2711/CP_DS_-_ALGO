/*
PROBLEM:Given a string you need to print all possible strings that can be made by placing spaces (zero or one) in between them. Output should be printed in sorted increasing order of strings.

Input:  str[] = "ABC"
Output: (A B C)(A BC)(AB C)(ABC)
Input:
First line contains the test cases T.  1<=T<=10
Each test case have one line string S of characters of length  N.  1<=N<=10

Output:
One line per test case, every string enclosed in ().(See example). Output should be printed in sorted order.

Example:
Input:
2
AB
ABC

Output:
(A B)(AB)
(A B C)(A BC)(AB C)(ABC)

link:https://practice.geeksforgeeks.org/problems/permutation-with-spaces/0

*/

#include<bits/stdc++.h>
using namespace std;

#define ios ios::sync_with_stdio(0),cin.tie(0);
#define runfile freopen("input.txt","r",stdin),freopen("output.txt","w",stdout);
#define ld long double 
#define ll long long int 
#define vi vector<ll>
#define pii pair<ll,ll>
#define mii map<ll,ll>
#define pqi priority_queue<ll>
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define all(a) (a).begin(),(a).end()
#define forn(i,a,n) for(ll i=a;i<(ll)n;i++)
#define coutt(v) forn(i,0,v.size()) cout<<v[i]<<" "
#define newline cout<<'\n'
#define mod 1e9+7
#define PI 3.14159265
#define N 10000001
void findans(string s,string output,ll i)
{
  if(i==s.size())
  {
    cout<<"("<<output<<")";
    return;
  }
  if(i<s.size()-1)
  findans(s,(output+s[i])+" ",i+1);
   findans(s,(output+s[i]),i+1);
  

}
int main()
{
    ios

   /* #ifndef ONLINE_JUDGE
  runfile
  #endif*/

   ll t;
   cin>>t;

   while(t--)
   {
     string s;
     cin>>s;
     string output="";
     ll i=0;
     findans(s,output,i);
    newline;
   }

    return 0;
}
