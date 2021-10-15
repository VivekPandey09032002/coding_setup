#star

if __name__ == '__main__':
	t=int(input())
	while t>0:
		n=int(input())
		for i in range(1,n+1):
			for j in range(1,n-i+2):
				if(j%5==0 and j!=0):
					print("#",end="")
				else:
					print("*",end="")	
			print()			
		t=t-1