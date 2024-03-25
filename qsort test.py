from random import randint

# generowanie danych
l = []
for i in range(10):
    l.append(randint(1, 10))
print(l)

def qsort(l):
    length = len(l)
    pivot = l[int(length / 2) - 1]
    leftList = []
    rightList = []

    for i in range(length):
        if(l[i] <= pivot):
            leftList.append(l[i])
        else:
            rightList.append(l[i])

    qsort(leftList)
    qsort(rightList)


qsort(l)
