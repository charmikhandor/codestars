def powerset(array):
    list=[[]]
    for i in range(len(array)+1):
        for j in range(i):
            list.append(array[j:i])
    list.sort()
    return list
n=int(input())
x=list(map(int,input().strip().split()))[:n]
a=powerset(x)
c=0
for i in range(len(a)):
    a1=a[i]
    for j in range(len(a)):
        a2=a[j]
        if(len(a1)==len(a2) and i!=j):
            for k in range(len(a1)):
                if a1[k]==a2[k]:
                    c=len(a1)
if(c>1):
    print(c)
else:
    print("Weak Array") 