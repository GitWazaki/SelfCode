
def f1(n) :
    r = 1
    if n<1 :
        print('n<1')
    else:
        for i in range(1,n+1) : 
            r *= i
    return r


def f2(n) :
    if n<1 :
        return 1
    else :
        return f2(n-1)*n

import functools

def fn(a, b):
    return a*b

def f3(n) :
    if n<1 :
        print('n<1')
    else:
        #return functools.reduce(fn,range(1,n+1))
        return functools.reduce(lambda x,y: x*y,range(1,n+1))

print(f1(5))
print(f2(6))
print(f3(7))