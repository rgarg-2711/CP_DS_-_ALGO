/*
PROBLEM:Print a sequence of numbers starting with N, without using loop, in which  A[i+1] = A[i] - 5,  if  A[i]>0, else A[i+1]=A[i] + 5  repeat it until A[i]=N.

Input:
The first line contains an integer T, number of test cases. Then following T lines contains an integer N.

Output:
For each test case, print the pattern in newline with space separated integers.

Constraints:
0< N < 10000

Example:
Input:
2
16
10
Output:
16 11 6 1 -4 1 6 11 16
10 5 0 5 10

Explanation:
We basically first reduce 5 one by one until we reach a negative or 0. After we reach 0 or negative, we one by one add 5 until we reach N.

link:https://practice.geeksforgeeks.org/problems/print-pattern/0

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
void findans(ll x,ll n,bool &ans)
{
  if(x==n)
  {
    cout<<x;
    return;
  }
  if(x>0&&!ans)
  {
    cout<<x<<" ";
    findans(x-5,n,ans);
  }
  else
  {
    cout<<x<<" ";
    ans=true;
    findans(x+5,n,ans);
  }

}
int main()
{
    ios

    /*#ifndef ONLINE_JUDGE
  runfile
  #endif*/

   ll t;
   cin>>t;

   while(t--)
   {
     ll n;
     cin>>n;
     cout<<n<<" ";
     bool ans=false;
     findans(n-5,n,ans);
    newline;
   }

    return 0;
}
