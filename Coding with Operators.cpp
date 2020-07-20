/*
Given three positive integers A, B and C. The task is to do the following operations one by one and print the results correspondingly.

Operation 1:  Print A raised to the power of B.  Let the power be P, i.e., P = POW(A, B).
Operation 2:  Print XOR of P with C.
Operation 3:  Print remainder of P when divided with C.

Hint : Storing powers of large numbers in an int may cause overflow, so make sure that you choose long long int for storing result.

Input:
First line contains number of testcases T. For each testcase, there will be single line containing  three positive integers A, B and C.

Output:
For each testcase, print the required answer.

User Task:
Since, this is a functional problem, you only need to complete the function operations(int a, int b, int c).

Constratints:
1 <= T <= 10
1 <= A <= 20
0 <= B <= 10
1 <= C <= 100

Example:
Input:
1
5 2 3

Output:
25
26
1

Explanation:
Testcase 1: 5 raised to the power 2 is 25. 25 XOR 3 is 26 and remainder when 25 is divided by 3 is 1.


*/


// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// Function Prototype with arguments a, b and c
void operations(int a, int b, int c);


 // } Driver Code Ends


//User function Template for C++

/* Function to do the operations.
* Arguments : a, b and c
*/
void operations(int a, int b, int c){
    
    // Your code here
    long long int P, C, R;
    P = pow(a,b);
    C = P^c;
    R = P%c;
    cout<<P<<endl<<C<<endl<<R<<endl;
    
    
}

// { Driver Code Starts.

// Driver Code
int main(){
    
    int testcase;
    cin >> testcase;
    
    while(testcase-- > 0){
        
        int a, b, c;
        
        cin >> a >> b >> c;
        
        operations(a, b, c);
        
    }
    
}  // } Driver Code Ends
