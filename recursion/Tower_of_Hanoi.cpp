/*
PROBLEM:The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move the entire stack to another rod. You are given the number of discs N. Initially, these discs are in the rod 1. You need to print all the steps of discs movement so that all the discs reach the 3rd rod. Also, you need to find the total moves.
Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most disc is numbered N. Also, all the discs have different sizes and a bigger disc cannot be put on the top of a smaller disc. Refer the provided link to get a better clarity about the puzzle.

Input:
The first line of input is T denoting the number of testcases. T testcases follow. Each testcase contains a single line of input containing N.

Output:
For each testcase, print the steps and the total steps taken. Please see the example output to see the steps format.

Constraints:
1 <= T <= 16
1 <= N <= 16

Example:
Input:
2
2
3
Output:
move disk 1 from rod 1 to rod 2
move disk 2 from rod 1 to rod 3
move disk 1 from rod 2 to rod 3
3
move disk 1 from rod 1 to rod 3
move disk 2 from rod 1 to rod 2
move disk 1 from rod 3 to rod 2
move disk 3 from rod 1 to rod 3
move disk 1 from rod 2 to rod 1
move disk 2 from rod 2 to rod 3
move disk 1 from rod 1 to rod 3
7

link:https://practice.geeksforgeeks.org/problems/tower-of-hanoi/0


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
void toh(ll n,ll s,ll a,ll d)
{
   if(n>=1)
   {
    toh(n-1,s,d,a);
    cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
    toh(n-1,a,s,d);
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
     toh(n,1,2,3);
     ll ans=pow(2,n)-1;
     cout<<ans;
    newline;
   }

    return 0;
}
