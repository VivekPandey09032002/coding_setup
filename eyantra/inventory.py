# Manage Inventory





# Main function
if __name__ == '__main__':
    t=int(input())
    while t>0:
        n=int(input())
        dic={}  # empty dic
        #entering items and quantity in dictonary
        while n>0:
            itm,qty=input().split()
            qty=int(qty)
            dic[itm]=qty
            n=n-1
        
        m=int(input())  # number of task
        while m>0:
            task=[x for x in input().split()]
            # converting third value to int
            task[2]=int(task[2])
            if(task[0]=="ADD"):
                if (task[1] in dic):
                    dic[task[1]]+=task[2] 
                    print("UPDATED Item "+task[1])
                else:
                    dic[task[1]]=task[2] 
                    print("ADDED Item "+task[1])
            else:
                #deleting
                #item present
                if(task[1] in dic):
                    if(task[2]>dic[task[1]]):
                        # quantity less
                        print("Item "+task[1]+ " could not be DELETED")
                    else:
                        dic[task[1]]-=task[2]
                        print("DELETED Item "+task[1])
                else:
                    #item not present
                    print("Item "+task[1]+" does not exist")                         
            m=m-1
        count=0
        for x in dic:
            count+=dic[x]
        print("Total Items in Inventory: {}".format(count))  
        t=t-1
