import random

n=int(input())


def findmax(l):
    count=0
    maximum=-1
    prev=l[0]
    for i in range(1,50):
        if(prev==l[i]):
            count+=1
        else:
            prev=l[i]
            if(maximum<count):
                maximum=count    
            count=0    

    return maximum 

     

def generate():
    l=[]
    for i in range(50):
        nbr = random.randint(0, 1) 
        l=l+[nbr]
    counto=0
    counte=0
    for i in range(50):
        if(l[i]==0):
            counto+=1
        else:
            counte+=1
    if(counto/50>=0.7):
         l=generate() 
    return l     



new=[]
dicto={}
for i in range(50):
    dicto[i]=0

for i in range(n):
    l=generate()
    maximum = findmax(l)
    new=new+[maximum]
    dicto[maximum]+=1
print(new)
print(dicto)

# new=generate()
# lo=findmax(new)  
# print(lo)
