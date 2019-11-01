n,m = [int(n) for n in input().split()]
A = [int(n) for n in input().split()]
B = [int(n) for n in input().split()]
C = {}
for ci,i in enumerate(A):
    for cj,j in enumerate(B):
        if i+j in C:
            C[i+j] = -1
        else:
            C[i+j] = [ci,cj]

count = 0
for key in C:
    if C[key] != -1:
        print(C[key][0],C[key][1])
        count+=1
    if count == m+n-1:
        break
