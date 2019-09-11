import random

num = input("生成n个随机数：")
result1 = []
for i in range(int(num)) :
    n = random.randint(65,90)
    result1.append(chr(n))

print(result1)

#列表推导式
result2 = [chr(random.randint(65,90)) for i in range(int(num))]
print(result2)

#numpy包中的random可生成随机矩阵
import numpy
result3 = [chr(i) for i in numpy.random.randint(65,90,[int(num),1])]
print(result3)