k = int(input())

i = 10

while(k):
    i += 1
    sum = 0
    ii = i
    while(ii):
        sum += ii % 10
        ii //= 10
    
    if sum == 10:
        k -= 1

print(i)
    