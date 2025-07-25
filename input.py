name = input("What is your name: ")
age = int(input("What is your age: "))
print(type(name))
print(type(age))
print(f"Your name is {name}, your age is {age}.")

if age >= 18:
    print("You are eligible to vote")

elif age < 18:
    print("You are not eligible to vote")

print("Thanks for coming")