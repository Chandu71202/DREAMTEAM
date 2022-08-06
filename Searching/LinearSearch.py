l=[10,30,14,213,14,13213,13]
x=14
def linearSearch(l):
    for i in range(len(l)):
        if l[i]==x:
            return i
    return -1
print(linearSearch(l))
