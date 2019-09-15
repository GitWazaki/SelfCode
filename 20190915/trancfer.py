
matrix = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]]

def printMatrix(m):
    for ele in m:
        for e in ele:
            print("%2d" % e, end = ' ')
            #print("{:2}".format(e), end=' ')
        print()

def transfer(m):
    rt = [[] for i in m[0]]
    for ele in m:
        for i in range(len(ele)):
            rt[i].append(ele[i])
    return rt

def t2(m):
    return list(zip(*m))

printMatrix(matrix)

print('='*20)
printMatrix(transfer(matrix))

print('='*20)
printMatrix(t2(matrix))