/*
There is a stone bridge connecting India to Srilanka. First stone starting from India is having 1 inscribed on it, and last stone is on Srilankan side. Each subsequent stone has two consecutive numbers on it except the last stone which may have one or two numbers inscribed on it depending on value of N.
Stones may be aligned as : 1, (2, 3), (4, 5), (6, 7)... N.

You are given a number N representing the last number on the last stone; and a number X. The task is to find the minimum number of jumps you need from either Indian side or Srilankan side to reach the stone that has X inscribed on it.
Note: Jumping on first stone will be counted as 0 jumps.

Input Format:
First line contains number of testcases T. For each testcase, there will be single line containing two positive integers N and X.

Output Format:
For each testcase, print the minimum number of jumps required to reach the stone having X inscribed on it.

User Task:
Since, this is a functional problem, you only need to complete the function minJump(int N, int X).

Constraints:
1 <= T <= 100
1 <= N <= 105
1 <= X <= N

Example:
Input:
2
10 3
5 1

Output:
1
0

Explanation:
Testcase 1: Stone alignment for N = 10 is as follows:
1, (2, 3), (4, 5), (6, 7), (8, 9), 10
To jump on X = 3, you only need one jump (since first stone jump will not be counted) from India side, and 4 jumps from Srilanka side. So the minimum of 1 and 4 is 1.

Testcase 2: Stone alignment for N = 5 is as follows:
1, (2, 3), (4, 5)
To jump on X = 1, you only need zero jumps (since first stone jump will not be counted) from India side, and 2 jumps from Srilanka side. So the minimum of 0 and 2 is 0.

*/


// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void findJumps(int, int);


 // } Driver Code Ends


//User function Template for C++
int min(int x, int y) 
{ 
    return (x < y) ? x : y; 
} 
  
// Function to find number of jumps
// N : number inscribed on the last stone.
// X : number on which we have to reach
void findJumps(int N, int X){
    
    // Your code here
    
        if(N%2 != 0){
            if(X%2 == 0){
                cout<<min((((X-1)/2)+1), ((N-X)/2));
            }
            else
                cout<< min(((X-1)/2),((N-X)/2));
        }
        else{
            if(X%2== 0){
                cout<<min(((X-1)/2)+1, ((N-X)/2));
            }
            else
                cout<<min((X-1)/2, ((N-X)/2+1));
        }
    cout << endl;
    
}

// { Driver Code Starts.

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        long long N, X;
        cin >> N >> X;
        
        findJumps(N, X);
    }
    
    return 0;
}  // } Driver Code Ends
