#slicing

if __name__ == '__main__':
	t=int(input())
	while t>0:
		n=int(input())
		itm=[int(x) for x in input().split()]
		revItm=itm[-1::-1]
		for x in revItm:
			print(x,end=" ")
		#taking every 3rd element
		l3=[]
		l5=[]
		for i in range(2,len(itm)):
			if(i%3==0):
				l3.append(itm[i]+3)
			if(i%5==0):
				l5.append(itm[i]-7)	
		#printing l3 and l5
		for x in l3:
			print(x,end=" ")
		print()	
		for x in l5:
			print(x,end=" ")
		#printing sum
		print()
		l3_7=itm[3:8]
		print(sum(l3_7))

		t=t-1
