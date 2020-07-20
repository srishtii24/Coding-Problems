/*
Given a number N. The task is to print word accordring to the directions given below:
1. If N is divisible by 3, print "Fork" (without quotes).
2. If N is divisible by 5, print "CPP" (without quotes).
3. If N is divisible by both 3 and 5, print "Fork CPP" (without quotes).|
4. If N ia neither divisible by 3 nor 5, print nothing.

Input Format:
First line of input contains number of testcases. For each testcase, there will be only single line of input which contains N.

Output Format:
For each testcase, print string as required.

User Task:
Since this is a functional problem, you only need to complete the function forkCPP(). We will take care of rest.

Examples:
Input:
3
3
5
15

Output:
Fork
CPP
Fork CPP

Explanation:
Testcase 1: 3 is only divisible by 3. So, ouput is Fork.
Testcase 3: 15 is divisible by 3 and 5 both. So, ouput is Fork CPP.
*/


// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// Function Prototype
void forkCPP();


 // } Driver Code Ends


//User function Template for C++

// Function to print ForkCPP
// N : input number
int forkCPP(int N){
    
    // Your code here
    if (N%3 == 0 && N%5 == 0)
        cout<<"Fork CPP";
    else if(N%3 == 0)
        cout<<"Fork";
    else if(N%5 == 0)
        cout<<"CPP";
    cout << endl;  
}

// { Driver Code Starts.

// Driver Code
int main(){
    
    int testcase;
    cin >> testcase;
    
    while(testcase-- > 0){
        
        int N;
        
        cin >> N;
        
        forkCPP(N);
        
    }
    
}  // } Driver Code Ends
