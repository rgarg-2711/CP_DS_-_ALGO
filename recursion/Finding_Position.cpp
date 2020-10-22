/*
PROBLEM:Some people are standing in a queue. A selection process follows a rule where people standing on even positions are selected. Of the selected people a queue is formed and again out of these only people on even position are selected. This continues until we are left with one person. Find out the position of that person in the original queue.

Input:
The first line of input contains an integer T denoting the number of test cases.The first line of each test case is N,number of people standing in a queue.

Output:
Print the position(original queue) of that person who is left.

Constraints:
1 <= T <= 103
1 <= N <= 108

Example:
Input:
2
5
9
Output:
4
8

link:https://practice.geeksforgeeks.org/problems/finding-position/0

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
    return;
  ans*=2;
  findans(n/2,ans);
  return;
}
int main()
{
    ios
/*
    #ifndef ONLINE_JUDGE
  runfile
  #endif*/

   ll t;
   cin>>t;

   while(t--)
   {
     ll n;
     cin>>n;
     ll ans=1;
     findans(n,ans);
     cout<<ans;
    newline;
   }

    return 0;
}
