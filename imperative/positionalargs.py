def print_args(*args):
    for i, arg in enumerate(args):
        print(f"Argument {i + 1}: {arg}")

def add(*a):
    result = 0
    for i in a:
        result = result + i
    print(result)

add(1,2, -5)