x,y=map(int,input().split())
i2=list(map(int,input().split()))
count=0
for i in i2:
  if(i==y):
    count+=1
  else:
    pass
if count>=1:
  print("yes")
else:
  print("no")
