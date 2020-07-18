"""
Given two positive numbers x and y, check if y is a power of x or not.

Input:
First line contains an integer, the number of test cases 'T'. Each test case should contain two positive numbers x and y.

Output:
Print 1 if y is a power of x, else print 0.

Constraints: 
1 <= T <= 30
1 <= x <= 103
1 <= y <= 108

Example:
Input:
2
2 8
1 3
Output:
1
0
"""

#PYTHON CODE:

t = int(input())
for _ in range(t):
    x,y = map(int,input().split())
    if x == 1:
        print(1 if y == 1 else 0)
        continue
    while y%x == 0:
        y //= x
    print(1 if y == 1 else 0)
        
