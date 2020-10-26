/*
PROBLEM:Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
Note : The order of strings are not important. Just print different strings in new lines.
Input Format :
Integer n
Output Format :
All possible strings in different lines
Constraints :
1 <= n <= 10^6
Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf

*/

#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
string nume[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void printKeypad(int num,string output)
{
    if(num==0||num==1)
    {
       // reverse(output.begin(),output.end());
        cout<<output<<endl;
        return;
    }
    int n=num%10;
    for(int i=0;i<nume[n].size();i++)
    {
       printKeypad((num/10),nume[n][i]+output);
    }
    
}
void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string output="";
    printKeypad(num,output);
    }

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
