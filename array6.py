x=int(input())
flag=0
for i in range(2,x):
  if(x%i==0):
    flag+=1
  else:
    pass
if flag>=1:
  print("no")
else:
  print("yes")        
