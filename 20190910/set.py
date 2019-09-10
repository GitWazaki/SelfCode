import random
#列表去重
src_list = [random.randint(1,10) for i in range(20)]
print(src_list)
target_list = []
for ele in src_list :
    if ele not in target_list :
        target_list.append(ele)
print(target_list)

#使用set结构，无法保证顺序
target_list2 = list(set(src_list))
print(target_list2)

import itertools
#print(dir(itertools))
src_list.sort() #排序
it = itertools.groupby(src_list) #将相同元素分为一组，需先排序
for k,g in it :
    print(k, end = " ")
