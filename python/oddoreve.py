
x=int(input("Enter the number:"))

def oddeven(x):
    if x%2==0:
        print('even')
    else:
        print('odd')
def factorial(x):
    fac=1
    for i in range(1,x+1):
        fac=fac*i
    print(fac) 

oddeven(x)
factorial(x)
