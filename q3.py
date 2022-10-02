mean = 9
evalue=2.718
ans_case1 = 0
ans_case2 = 0
ans_case3=0


def ans(i):
    ans_case=(mean**i)*(evalue**(-mean))/factorial(i)
    return ans_case

def factorial(k):
    if k==1:
        return 1
    else:
        return k*factorial(k-1)

for i in range(10,150):
    ans_case1+=ans(i)
print(ans_case1)    

for i in range(1,5):
    ans_case2+=ans(i)
print(ans_case2)    

for i in range(8,11):
    ans_case3+=ans(i)
print(ans_case3)