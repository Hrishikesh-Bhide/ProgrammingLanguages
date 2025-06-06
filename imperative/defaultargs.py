def greet(name="Guest", message="Welcome"):
    print(f"{message}, {name}!")

def generic(a,b, *c, d="Hello", **e):
    print(a)
    print(b)
    print(c)
    print(d)
    print(e)

generic(1,2,3,4,5,5,6,7,8,9,d=10,9)