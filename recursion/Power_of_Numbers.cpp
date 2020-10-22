/*
 PROBLEM:Given a number N, let the reverse of the number be R. The task is to print the output of the Expression pow(N,R), where pow function represents N raised to power R.
Note: As answers can be very large, print the result modulo 1000000007.

Input:
The first line of the input consists of an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line containing an integer N.

Output:
Corresponding to each test case, print in a new line, the output of the expression pow as described above.

Constraints:
1 <= T <= 103
1 <= N <= 1010

Example:
Input:
2
2
12

Output:
4
864354781

Explanation:
Testcase 1: The reverse of 2 is 2 and after raising power of 2 by 2 we get 4 which gives remainder as 4 by dividing 1000000007.

link:https://practice.geeksforgeeks.org/problems/power-of-numbers/0

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
#define mod 1000000007
#define PI 3.14159265
#define N 10000001
ll findans(ll n,ll a)
{
 if(a==0)
  return 1;
ll s=((findans(n,a/2))%mod);
s=(s*s)%mod;
if(a%2==0)
{
  return s;

}
else
{
  return (((s)*(n%mod))%mod);

  

}

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
   ll a=0,num=n;
   while(num>0)
   {
    a=((a*10)+(num%10));
    num/=10;
   }
   ll ans=findans(n,a);

    

    cout<<ans;
    newline;
   }

    return 0;
}
