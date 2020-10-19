/*
 PROBLEM:Given N, print all N digit numbers in increasing order, such that their digits are in strictly increasing order(from left to right).

Input:
First line of input contains T denoting number of test cases. Only line of each test case contains one integers N, as described above.

Output:
For each test case output a single line containing all the possible numbers as described above(Numbers should be space separated).

Constraints:
1<= T <= 9
1<= N <= 9

Example:
Input:
1
2

Output:
12 13 14…89

Explanation:
For N=2, the correct sequence is 12 13 14 15 16 17 18 19 23 24 and so on up to 89.

link:https://practice.geeksforgeeks.org/problems/n-digit-numbers-with-digits-in-increasing-order/0
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
void findans(ll n,string s,char c)
{
  if(n==0)
  {
    cout<<s<<" ";
    return;
  }
  if(c>'9')
    return;
  for(;c<='9';c++)
  {
    char i=c;
    i++;
    findans(n-1,s+c,i);


  }
  return;
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
     ll n;
     cin>>n;
     string s="";
     char c='1';
     findans(n,s,c);
    newline;
   }

    return 0;
}
