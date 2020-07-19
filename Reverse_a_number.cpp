/*
-----Reverse the number----
PrepBuddy gave you a number 
X
 and asks you to reverse that number and print it.

Input format
One integer is provided denoting the value of 
X
.
Note - The given number doesn't have leading or ending zero's.

Output format
Print the reverse of 
X
.

Constraints
1
<=
X
<=
10
6

Time Limit
1
 ?secon

Example
Input
102345

Output
543201

Note - Do not use any inbuilt function for solving this question.
*/

// Code:
#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n, r = 0;
  cin >> n;
  while(n!=0){
    r = r*10;
    r = r+n%10;
    n = n/10;
  }
  cout<<r;
  return 0;
}
