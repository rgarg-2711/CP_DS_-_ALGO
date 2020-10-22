/*
PROBLEM:A function f is defined as follows F(n)= (1) +(2*3) + (4*5*6) ... n. Given an integer n the task is to print the F(n)th term.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test contains an integer n.

Output:
For each test case print the nth term of the sequence. .

Constraints:
1 <= T <= 10
1 <= N <= 10

Example:
Input:
2
5
7
Output:
365527
6006997207

link:https://practice.geeksforgeeks.org/problems/recursive-sequence/0

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
void findans(ll n,ll &ans)
{
  if(n==1)
  {
    ans+=1;
    return;
  }
  ll s=((n*(n-1))/2)+1;
  ll curr=1;
  forn(i,0,n)
  {
    curr*=s;
    s++;
  }
  ans+=curr;
  findans(n-1,ans);
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
     ll ans=0;
     findans(n,ans);
     cout<<ans;
    newline;
   }

    return 0;
}
