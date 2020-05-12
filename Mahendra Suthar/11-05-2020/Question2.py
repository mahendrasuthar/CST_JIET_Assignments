import sys     
  
def minXOR(arr, n): 
       
    arr.sort() 
   
    minXor =  int(sys.float_info.max) 
    val = 0
 
    for i in range(0,n-1): 
        val = arr[i] ^ arr[i + 1]; 
        minXor = min(minXor, val); 
      
    return minXor 

arr = [9, 5, 3] 
n = len(arr) 
print(minXOR(arr, n)) 