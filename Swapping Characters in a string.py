'''
You are given with string 'Str' and character 'A' and 'B'.
You have to swap these character present in the string.
For example:
Input:
Toere was a phnd
o h 
Output:
There was a pond
'''
def interchange_chars(Str, A, B):
    
    Str = Str.replace(A, 'C')
    Str = Str.replace(B, A)
    Str = Str.replace('C', B)
    print(Str)
    pass


Str = input()
A = char(input())
B = char(input())
interchange_chars(Str, A, B)

