/*
Given an array A (may contain duplicates) of N elements and a positive integer K. The task is to count the number of elements which occurs exactly floor(N/K) times in the array.
 

Input:
First line of input contains number of testcases. For each testcase, there will be two lines, first of which contains N and K and second line contains array elements.

Output:
For each testcase, print the count of elements in the array which occurs exactly floor(N/K) times.

Constrains:
1 <= T <= 100
1 <= N <= 103
1 <= Ai <= 103
1 <= K <= 103
 

User Task:
Your task is to complete the function countSpecials() which should count the elements which occurs exactly floor(N/K) times.

Example:
Input:
1
5 2
1 4 1 2 4

Output:
2

Explanation:
Testcase 1: In the given array, 1 and 4 occurs floor(5/2) = 2 times. So count is 2.
*/


// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// Function Prototype
int countSpecials(int[], int, int);


 // } Driver Code Ends


//User function Template for C++

/*Function to count number of elements with occurrence
* exactly equal to floor(sizeof_array/K)
* arr : input array
* sizeof_array : number of array elements
*/
int countSpecials(int arr[], int sizeof_array, int K){
    
    int f = floor(sizeof_array/K), count = 0;
    for (int i=0;i<sizeof_array;i++){
        
    }
    
    // Your code here
    
    
    
    return count;
    
}

// { Driver Code Starts.

// Driver code to rest countSpecials function
int main() {
	
	// Testcase input
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    
	    // sizeof_array : number of array elements
	    // K : as given in statement
	    int sizeof_array, K;
	    cin >> sizeof_array >> K;
	    
	    // array of size sizeof_array
	    int arr[sizeof_array];
	    
	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }
	    
	    // calling function and printing count the occurrence
	    cout << countSpecials(arr, sizeof_array, K) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
