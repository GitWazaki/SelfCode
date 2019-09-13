
N = 10
for i in range(N) : 
    if i==0 :
        print(' '*(N-i-1) + '*')
    else :
        s = ' '*(N-i-1) + '*' + (i*2-1)*' ' + '*'
        print(s)

for i in range(N-1) :
    if i == N-2 :
        print(' '*(i+1)+'*')
    else :
        print(' '*(i+1)+'*'+' '*((N-2-i)*2-1)+'*')