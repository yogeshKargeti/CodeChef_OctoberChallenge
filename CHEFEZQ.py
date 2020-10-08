# cook your dish here
for i in range(int(input())):
    n,k=input().split()
    n=int(n)
    k=int(k)
    flag=0
    q=list(map(int,input().split()))
    for j in range(n-1):
        if (q[j]<k):
            flag=1
            break
        q[j+1]+=(q[j]-k)
    if flag==1:
        print(j+1)
    else:
        print(n+int(q[n-1]/k))
               
               
