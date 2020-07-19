/*
Given an array of integers. Complete the partition() function used for the implementation of Quick Sort.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case is N, size of the array. The second line of each test case contains N space separated values of the array arr[].

Output:
For each testcase, in a new line, print the sorted array.

Your Task:
You don't need to read input or print anything. Your task is to complete the function partition() which takes the array arr[] and the range of indices to be considered [low, high] and partitions the array in the given range considering the last element as the pivot such that, all the elements less than(or equal to) the pivot lie before the elements greater than it. 

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 50
1 <= N <= 103
1 <= arr[i] <= 104

Example:
Input:
2
5
4 1 3 9 7
10
10 9 8 7 6 5 4 3 2 1
Output:
1 3 4 7 9
1 2 3 4 5 6 7 8 9 10

Explanation:
Testcase 1: Elements in sorted form are 1 3 4 7 9.
Testcase 2: Elements in sorted form are 1 2 3 4 5 6 7 8 9 10.
*/

//C++ CODE:
// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int partition (int arr[], int low, int high);
/* The main function that implements QuickSort
 arr[] --> Array to be sorted, low  --> Starting index, high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now at right place */
        int pi = partition(arr, low, high);
        // Separately sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}// } Driver Code Ends


/* The main function that implements QuickSort
 arr[] --> Array to be sorted,    low  --> Starting index,   high  --> Ending index
void quickSort(int arr[], int low, int high) {
    if (low < high)     {
        // pi is partitioning index, arr[p] is now  at right place
        int pi = partition(arr, low, high);
        // Separately sort elements before / partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}*/
/* This function takes last element as pivot, places  the pivot element 
   at its correct position in sorted  array, and places all smaller (smaller
   than pivot) to left of pivot and all greater elements to right  of pivot */
int partition (int arr[], int low, int high)
{
   // Your code here
   int i, j, r, x, temp;
   i = low - 1;
   r = high;
   x = arr[high];
   for(j = low;j<r;j++)
   {
       if (arr[j] <= x)
       {
           i++;
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
       }
   }
   i++;
   temp = arr[i];
   arr[i] = arr[r];
   arr[r] = temp;
   
   return i;
}

	
