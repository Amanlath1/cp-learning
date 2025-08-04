def celsius_to_fahrenheit(temp_celsius):
    """This function is to convert temperature from celsius to fahrenheit."""
    temp_fahrenheit = (temp_celsius * 9/5) + 32
    return temp_fahrenheit

original_cel_tem = 25
temp = celsius_to_fahrenheit(original_cel_tem)
print(f"The temperature in celsius is {original_cel_tem} and temperature in fahrenheit is {temp}")