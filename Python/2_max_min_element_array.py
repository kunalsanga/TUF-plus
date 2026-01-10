arr=[3,6,8,1,0]
mn=mx=arr[0]

for x in arr:
    mn=min(mn,x)
    mx=max(mx,x)

print(mn,mx)