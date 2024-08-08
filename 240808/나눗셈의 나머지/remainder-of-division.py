a,b = map(int,input().split()) 
arr = [0]*10 
sum = 0

while True : 
    if a<=1 : break 
    a //= b 
    arr[a%b]+=1

for i in arr : 
    sum += i**2

print(sum)