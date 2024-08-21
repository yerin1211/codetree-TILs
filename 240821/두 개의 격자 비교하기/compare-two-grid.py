n, m = map(int, input().split(' '))
arr = []

# 2개의 격자
for i in range(2):
  num_list = []
  # n x m 크기의 격자
  for i in range(n):
    x = list(map(int, input().split(' ')))
    num_list.append(x)
  arr.append(num_list) 
#arr # 첫 번째 격자 : arr[0], 두 번째 격자 : arr[1]


answer = []

# 같은 값이면 0, 다르면 1
for i in range(n):
  answer_list = []
  for j in range(m):
    if arr[0][i][j] == arr[1][i][j]:
      answer_list.append(0)
    else:
      answer_list.append(1)
  answer.append(answer_list)

for item in answer:
    for a in item:
        print(a, end=' ')
    print('')