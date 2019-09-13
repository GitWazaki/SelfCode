SIZE = 6
array = [[0]*SIZE] #[ [0,0,0,0,0,0] ]
for i in range(SIZE-1) :
    array += [[0]*SIZE] #获取二位列表

#控制方向：0下1上2右3左
orient = 0
j , k = 0 , 0  #行列号

for i in range(SIZE*SIZE):
    array[j][k] = i+1

    if j+k == SIZE-1 : 
        if j >= k :
            orient = 2  #右
        else:
            orient = 3  #左
    elif j==k and j >= SIZE / 2 :
        orient = 1      #上
    elif j+1 == k and k <= SIZE/2 :
        orient = 0      #下

    if orient == 0 :
        j+=1
    elif orient == 1 :
        j-=1
    elif orient == 2:
        k+=1
    elif orient == 3:
         k-=1

for ele in array :
    for e in ele : 
        print("{:02}".format(e),end=' ')
    print(' ')
'''
01 20 19 18 17 16
02 21 32 31 30 15
03 22 33 36 29 14
04 23 34 35 28 13
05 24 25 26 27 12
06 07 08 09 10 11
'''
