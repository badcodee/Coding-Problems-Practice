num = int(input())

fact = 1
while(num>1):
    fact = fact * num
    num -=1 
print(fact)

fact_str = str(fact)
count = 0
for i in fact_str:
    if i=='0':
        count +=1

print(count)