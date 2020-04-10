n = int(input("Height:")) 
while n<=1 or n>8:
    n = int(input("Height:"))

i = n-1
e = 1

while i>=0:
    print(" "*i,"#"*e,"\n")
    e+=1
    i-=1