def add(a, b):
    result = a + b
    print(f"Inside function - id(result): {id(result)}, result: {result}")
    return result

x = 0

print(f"Before function call - id(x): {id(x)}, x: {x}")

x = add(3, 4)

print(f"After function call - id(x): {id(x)}, x: {x}")
