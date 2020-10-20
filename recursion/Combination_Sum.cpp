/*
PROBLEM:Given an array of integers A and a sum B, find all unique combinations in A where the sum is equal to B. The same repeated number may be chosen from A unlimited number of times.

Note:
        1. All numbers will be positive integers.
        2. Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
        3. The combinations themselves must be sorted in ascending order.

Input:
First line of input contains number of testcases T. For each testcase, there will be three lines of input, first of which contains N, size of array. Next line contains N space seperated integers, and the last line contains B.

Output:
For each testcase, print the sets enclosing a backet "(" and ")". No space between two sets. If no set can be formed with the given set, then print "Empty" (without quotes).

Constraints:
1 <= T <= 500
1 <= N <= 12
1 <= A[i] <= 9
1 <= B <= 30

Example:
Input:
3
4
7 2 6 5
16
11
6 5 7 1 8 2 9 9 7 7 9
6
4
2 4 6 8
8

Output:
(2 2 2 2 2 2 2 2)(2 2 2 2 2 6)(2 2 2 5 5)(2 2 5 7)(2 2 6 6)(2 7 7)(5 5 6)
(1 1 1 1 1 1)(1 1 1 1 2)(1 1 2 2)(1 5)(2 2 2)(6)
(2, 2, 2, 2)(2, 2, 4)(2, 6)(4, 4)(8)

Explanation:
Testcase 1: Required sets with sum equal to B (8) are as follows:
[2, 2, 2, 2]
[2, 2, 4]
[2, 6]
[4, 4]
[8]

link:https://practice.geeksforgeeks.org/problems/combination-sum/0

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
void findans(ll b,ll *d,ll n,string s,ll &ans)
{
  if(b==0)
  {
    //print
    s[s.size()-1]=')';
    ans++;
    cout<<s;
   return;
  }
  if(b<0)
    return;
  if(n==0)
    return;
  string pass=s+to_string(d[0]);
  pass+=' ';
  findans(b-d[0],d,n,pass,ans);
  findans(b,d+1,n-1,s,ans);
  return;

}
int main()
{
    ios

  /*  #ifndef ONLINE_JUDGE
  runfile
  #endif
*/
   ll t;
   cin>>t;

   while(t--)
   {
     ll n,x;
     cin>>n;
     vi dab;

     set<ll>a;
     for(ll i=0;i<n;i++)
     {
      cin>>x;
      if(a.find(x)==a.end())
      {
        a.insert(x);
        dab.pb(x);
      }
     }
     sort(all(dab));
     ll d[15];
     for(ll i=0;i<dab.size();i++)
     {
      d[i]=dab[i];
     }
     ll b;
     cin>>b;
     string s="(";
     ll ans=0;
     findans(b,d,dab.size(),s,ans);
     if(ans==0)
     cout<<"Empty";
    newline;
   }

    return 0;
}
