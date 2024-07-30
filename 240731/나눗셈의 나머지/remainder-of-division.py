arr= input().split(" ")
a,b = int(arr[0]), int(arr[1])
c=[]
e=0

while a > 1:
    c.append(a%b)
    a=a//b

#if a//b ==0:
#    c.append(a%b)

i=0
d=[0]*b

for i in c:
    d[i]+=1

for i in d:
    e+=i**2

print(e)