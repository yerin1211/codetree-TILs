days = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
week = ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"]

m1, d1, m2, d2 = map(int, input().split())
A = input()
day = (sum(days[0:m2])+d2)-(sum(days[0:m1])+d1) #1

cnt=0
cnt+=day//7 #2
if(day%7>=week.index(A)): #3
    cnt+=1

print(cnt)