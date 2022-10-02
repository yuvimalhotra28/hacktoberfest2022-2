n=int(input())

p=0.35

def factorial(k):
    if k==1:
        return 1
    else:
        return k*factorial(k-1)

def benroulli(n):
    ans=factorial(n)/(factorial(n/2)*factorial(n/2))
    k=((p)**(n/2)*(1-p)**(n/2))
    return ans*k

print(benroulli(n))
print(n*(1-p))