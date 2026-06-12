def generic(a,b, *c, d, **e):
    print(a)
    print(b)
    print(c)
    print(d)
    print(e)
generic(1,2,3,4,5,d=3,e=6,f=7)