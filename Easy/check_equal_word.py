w1=str(input())
w2=str(input())
w3=str(input())
d={"a":0,"b":1,"c":2,"d":3,"e":4,"f":5,"g":6,"h":7,"i":8,"j":9,"k":10,"l":11,"m":12,"n":13,"o":14,"p":15,"q":16,"r":17,"s":18,"t":19,"u":20,"v":21,"w":22,"x":23,"y":24,"z":25}
s1=""
s2=""
s3=""
for i in w1:
  s1+=str(d[i])
for i in w2:
   s2+=str(d[i])
for i in w3:
   s3+=str(d[i])
if int(s1)+int(s2)==int(s3):
   print("true")
else:
   print("false")
  
