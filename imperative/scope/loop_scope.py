# Unlike C++, a for loop in Python does not create a new nested scope.
# The variable i becomes part of the surrounding function scope and
# therefore remains accessible even after the loop has finished.

def f():
    for i in range(1, 10):
        print(f"i (in loop body): {i}")
    print(f"i (outside loop body): {i}")

f()
