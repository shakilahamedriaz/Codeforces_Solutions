//using python:

n = int(input())
triangular = 1
i = 1
while triangular < n:
    i += 1
    triangular += i
if triangular == n:
    print("YES")
else:
    print("NO")
