try:
    age = int(input("Enter your age: "))
    print(f"your age is {age}.")
except ValueError:
    print("Enter a number between 0-9. No alphabet allowed.")

try:
    numenator = int(input("Enter the numenator: "))
    denominator = int(input("Enter the denominator: "))
    result = numenator/denominator
    print(f"The result is {result}")
except ValueError:
    print("Please enter in number from 0-9. Alphabet are not alowed.")
except ZeroDivisionError:
    print("You can't divide a number by 0.")

