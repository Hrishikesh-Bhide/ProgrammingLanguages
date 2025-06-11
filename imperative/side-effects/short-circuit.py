x = 0

def f1():
    global x
    x += 1
    print("f1 called")
    return False

def f2():
    global x
    x += 10
    print("f2 called")
    return True

if f1() or f2():
    print("Condition passed")

print("Final x:", x)
