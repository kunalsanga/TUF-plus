arr = [-2,1,-3,4,-1,2,1,-5,4]

curr = best = arr[0]

for x in arr[1:]:
    curr = max(x, curr + x)
    best = max(best, curr)

print(best)
