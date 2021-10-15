#palindrome

if __name__ == '__main__':
	t=int(input())
	while t>0:
		s=input()
		s=s.lower()
		# two pointer
		i=0
		j=len(s)-1
		isplandrome=True
		while i<j:
			if(s[i]==s[j]):
				i=i+1
				j=j-1
			else:
				isplandrome=False	
		if(isplandrome):
			print("It is a palindrome")
		else:
			print("It is not a palindrome")	
		t=t-1