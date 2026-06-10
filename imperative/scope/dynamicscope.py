def outer(choice):
  a = "outer contents of a"
  b = "outer contents of b"
  c = "outer contents of c"
  def inner1():
    a = "inner1 contents of a"
    b = "inner1 contents of b"
    inner_inner()
  def inner2():
    a = "inner2 contents of a"
    b = "inner2 contents of b"
    inner_inner()
  def inner_inner():
    a = "inner inner contents of a"
    print(f"{a=}")
    print(f"{b=}")
    print(f"{c=}")
  if choice == 1:
    b = 20
    inner1()
  else:
    b = 10
    inner2()
outer(2)