#count character

if __name__ == '__main__':
    t=int(input())
    while t>0:
        s=input()
        l=list(s.split(" "))
        print(l)
        for i in range(0,len(l)):
            if i==0:
                print(len(l[i])-1,end=",")
            elif i==len(l)-1:
                print(len(l[i]),end="\n")  
            else:
                print(len(l[i]),end=",")
        t=t-1
