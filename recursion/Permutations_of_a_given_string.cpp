/*
PROBLEM:Given a string S. The task is to print all permutations of a given string.

Input:
The first line of input contains an integer T, denoting the number of test cases. Each test case contains a single string S in capital letter.

Output:
For each test case, print all permutations of a given string S with single space and all permutations should be in lexicographically increasing order.

Constraints:
1 ≤ T ≤ 10
1 ≤ size of string ≤ 5

Example:
Input:
2
ABC
ABSG

Output:
ABC ACB BAC BCA CAB CBA 
ABGS ABSG AGBS AGSB ASBG ASGB BAGS BASG BGAS BGSA BSAG BSGA GABS GASB GBAS GBSA GSAB GSBA SABG SAGB SBAG SBGA SGAB SGBA

Explanation:
Testcase 1: Given string ABC has permutations in 6 forms as ABC, ACB, BAC, BCA, CAB and CBA .

link:https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string/0

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
void printans(string s,ll start,set<string> &ans,string output)
{
    if(start==s.size())
    {
        ans.insert(output);
        return;
    }
    for(ll i=start;i<s.size();i++)
    {
        swap(s[start],s[i]);
        printans(s,start+1,ans,output+s[start]);
         swap(s[start],s[i]);
    }
}
int main()
{
    ios

   /* #ifndef ONLINE_JUDGE
    runfile
    #endif
*/ll t;
cin>>t;
while(t--)
{
    string s;
   cin>>s;
   sort(all(s));
   set<string>ans;
   string output="";
   printans(s,0,ans,output);
   for(auto it=ans.begin();it!=ans.end();it++)
   {
    cout<<*it<<" ";
    
   }
cout<<endl;
}
   
    return 0;
}




