x=input()
count=0
for i in x:
  if(i=='a' or i=='e' or i=='o' or i=='i' or i=='u'):
     count+=1
  else:
    pass
if count>=1:
  print("yes")
else:
  print("no")         
