ar = [2, 3, 5, 4, 5, 3, 4] 
n=len(ar)

res = ar[0] 
for i in range(1,n): 
	res = res ^ ar[i] 

print ("Element occuring once is",res)
