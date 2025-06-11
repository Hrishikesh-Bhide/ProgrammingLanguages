val = 2

def f():
    global val
    val += 1
    return val

x = f() + f() * f()
print(x)