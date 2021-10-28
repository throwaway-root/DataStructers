
def cal(l,m,n): 
    if n == '+':
        print("\n",a,"+",b,"=",a+b)
    elif n == '-':                   
        print("\n",a,"-",b,"=",a-b) 
    elif n == '*':                    
        print("\n",a,"*",b,"=",a*b)
    elif n == '/':                       
        print("\n",a,"/",b,"=",float(a/b))
    else:
        print("Some error occured,Try again")
# main program  
#select the choice
print("""Select your choice:
For Binary Calculations

""")
x=int(input("Your Choice:"))
# binary calculator 
if x==1:
    print("""
    Binary Calculator
    :::::::::::::::::
    """)
    
    a=int(input("Enter First Number:"))
    b=int(input("Enter Second Number:")) 
    print("""
For addition→ Enter +
For subtraction→ Enter -
For multiplication→ Enter *
For division→ Enter /
    """)
    o = input("Enter operation:") #opertion
    calr(a,b,o)                   #function calling
