# Solution/Algorithm
- Two pointer

There exists a tricky solution. Because string only contains "a" and "b", 
we can always remove palindrome subsequence in two steps (remove all a's and then remove all b's).
That is, we can reduce this problem to a "Palindrome checking problem".
If the string is a palindrome, then the answer is 1.
Else the answer is 2.
