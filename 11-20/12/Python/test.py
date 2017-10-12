def sumdivs(n):
  s=0
  for i in range(1, int(n**0.5)+1):
    if n%i==0:
      s+=2
  if int(n**0.5)==n**0.5:
    s=s-1
  return s
  
l=[1,3]
while sumdivs(l[-1])<500:
  z=l[-1]-l[-2]+1
  l.append(l[-1]+z)
print(l[-1])
