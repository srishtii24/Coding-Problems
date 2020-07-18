"""
Given an integer, check whether it is Bleak or not.

A number ‘n’ is called Bleak if it cannot be represented as sum of a positive number x and set bit count in x, i.e., x + countSetBits(x) is not equal to n for any non-negative number x.

Examples :

3 is not Bleak as it can be represented
as 2 + countSetBits(2).

4 is t Bleak as it cannot be represented 
as sum of a number x and countSetBits(x)
for any number x.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line. The first line of each test case contains a single integer N to be checked for Bleak.

Output:
Print "1" or "0" (without quotes) depending on whether the number is Bleak or not.

Constraints:
1 <= T <= 1000
1 <= N <= 10000

Example:
Input:
3
4
167
3

Output:
1
0
0
"""

#PYTHON CODE:

def countSetBits(i):
    binary = bin(i)
    setbits = [ones for ones in binary[2:] if ones == '1']
    return len(setbits)

def bleak(i,n):
    k = (i) + countSetBits(i)
    if (k == n):
        return 1
    else:
        return 0

if __name__ == '__main__':
    t = int(input())
    while(t>0):
        n = int(input())
        i = n
        while(i>0):
            res = bleak(i,n)
            if (res == 1):
                print(0)
                break
            i -= 1
        if (i == 0):
            print(1)
        t -= 1
