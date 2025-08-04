user = {
    "firstname": "Aman",
    "lastname": "Lath",
    "email": "aman@example.com",
    "age": 30
}

print(user)
print(user["firstname"])
user["city"] = "una"
print(user["city"])
print(user)
user["age"] = 22
print(user["age"])
print(user)

for key in user:
    value = user[key]
    print(f"key: {key}, value: {value}")

for key , value in user.items():
    print(f"The user's {key} is {value}")