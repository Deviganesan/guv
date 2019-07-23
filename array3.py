s=input(" ")
count=0
for i in s:
  if i=='0'or i=='1':
    count+=1
  else:
    pass
if count>=len(s):
  print("yes")
else:
  print("no")          
