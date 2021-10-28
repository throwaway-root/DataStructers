
def arm(a):     
    
    #a=int(input("enter number:"))
    strnum=str(a)
    sum=0
    for i in strnum:
        sum=sum+int(i)**3
    
    if a==sum:
        print(a,"is an armstrong number")
    else:
        print(a,"is not an armstrong number")
#main
print("ARMSTRONG NUMBER")
num=int(input("enter a number:"))
arm(num)

def prime(k):
    if k!=0:
        count=0
        for i in range(1,k+1):
                if k%i==0:
                    count+=1
    #print(count)            
        if count<=2:
            print("The number",k," is prime")
        else:
            print(k," is not a prime")
    else:
        print("0 is not a prime")
#main program
print("PRIME NUMBER")
pr=int(input("enter numbe to check whether its prime or not"))
prime(pr)
