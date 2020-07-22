/*
-----------COUNT ODD EVEN-----------
Given an array A of N elements. The task is to count number of even and odd elements in the array.

Input:
First line of input contains number of testcases T. For each testcase, there will be two line of input, first line of which contains N and next line contains N array elements.

Output:
For each testcase, print the number of odd elements first and then number of even elements seperated by space in a single line.

User Task:
Your task is to complete the function countOddEven() which should print number of odd and number of even elements in a single line seperated by space.

Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= Ai <= 106

Example:
Input:
1
5
1 2 3 4 5

Output:
3 2

Explanation:
Testcase 1: In the given array, there are 3 odd elements (1, 3, 5) and 2 even elements (2 and 4).
*/

// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// Function Prototype
void countOddEven(int[], int);


 // } Driver Code Ends


//User function Template for C++

/*Function to count even and odd elements in the array
* arr : Array with its elements
* sizeof_array : number of array elements
* countOdd : variable to count number of odd elements
* countEven : variable to count number of even elements
*/
void countOddEven(int arr[], int sizeof_array)
{
    
    // your code here
   int count = 0;
   for (int i = 0; i<sizeof_array; i++){
        if (arr[i] % 2 != 0){
            count += 1;
        }
   }
   cout<<count<<" "<<(sizeof_array-count)<<endl;
    
}

// { Driver Code Starts.

// Driver code to test countOddEven function
int main() {
	
	// Testcase input
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    
	    int arr[sizeof_array];
	    
	    // Array elements input
	    for(int i = 0; i < sizeof_array; i++){
	        cin >> arr[i];
	    }
	    
	    // Calling function to count even and odd
	    countOddEven(arr, sizeof_array);
	    
	}
	
	return 0;
}  // } Driver Code Ends
