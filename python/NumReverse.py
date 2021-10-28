#taking input from the user
num = int(input("Enter the number:"))
reverse = 0
while num != 0:
    digit = num % 10
    reverse = reverse * 10 + digit
    num //= 10

print("Reversed Number is: " + str(reverse))
