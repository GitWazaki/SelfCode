try:
    f = open('sample.txt','r',True,'UTF-8')
    #way 1
    while True:
        line = f.readline()
        if not line:
            break
        else:
            print(line,end='')
    print()
    #way 2
    print(f.tell())
    f.seek(0)
    for line in f:
        print(line, end='')
    print()
except:
    print("异常")
finally:
    print("关闭文件")
    f.close()