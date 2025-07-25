fruits = ["Apple", "Banana", "Orange"]

print(fruits)
print(fruits[2])
print(fruits[-1])

fruits[0] = "Litchi"
print(fruits)

fruits.append("Guava")
print(fruits)

fruits.remove("Banana")
print(fruits)
del fruits[2]
print(fruits)

print(len(fruits))