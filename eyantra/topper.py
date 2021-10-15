#topper

if __name__ == '__main__':
	t=int(input())
	while t>0:
		n=int(input())
		detail=[]
		while n>0:
			ns=[x for x in input().split()]
			ns[1]=float(ns[1])
			detail.append(ns)
			n=n-1
		detail=sorted(detail,key= lambda x : (-x[1],x[0]))	
		max=detail[0][1]
		for x in detail:
			if(max==x[1]):
				print(x[0])
			else:
				break	
		
		t=t-1