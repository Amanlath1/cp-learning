product = {
    "name" : "Laptop",
    "price" : 1200,
    "in_stocks" : True
}

print(product["name"])
print(product["price"])

product["on_sale"] = True

for key, value in product.items():
    print(f"{key} : {value}")