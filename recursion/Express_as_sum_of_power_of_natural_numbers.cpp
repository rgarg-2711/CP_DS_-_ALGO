/*
PROBLEM:Given two numbers X and N, find out the total number of ways X can be expressed as sum of Nth power of unique natural numbers.

Examples:

Input  : X = 10, N = 2
Output : 1
Explanation: 10 = 12 + 32, 
Hence total 1 possibility

Input  : X = 100, N = 2
Output : 3
Explanation: 100 = 102
             OR 62 + 82
             OR 12 + 32 + 42 + 52 + 72
Hence total 3 possibilities

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains a single line containing two space seperated integers denoting the values of X and N respectively.

Output:
For each test case output a new line containing a single integer denoting the total number of ways X can be expressed as sum of Nth power of unique natural numbers.

Constraints:
1 <= T <= 100
1 <= X <= 103
1 <= N <= 5

Example:
Input:
2
10 2
100 2
Output:
1
3

link:https://practice.geeksforgeeks.org/problems/express-as-sum-of-power-of-natural-numbers/0
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
void findans(ll x,ll n,ll &ans,ll &i)
{
  if(x==0)
  {
    ans++;
    return;
  }
  if(x<0)
  {
    return;
  }
  for(;i<1001;i++)
  {
    ll y=(pow(i,n)+0.5);
    if(y>x)
      break;
    ll z=i;
    i++;
    findans((x-y),n,ans,i);
    i=z;
  }
  //cout<<"rash";
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
     ll x,n;
     cin>>x>>n;
     ll ans=0;
     ll i=1;
     findans(x,n,ans,i);
     cout<<ans;
    newline;
   }

    return 0;
}
