def sub_lists (l):
	lists = [[]]
	for i in range(len(l) + 1):
		for j in range(i):
			lists.append(l[j: i])
	return lists

k=int(input())
l = list(map(int,input().split()))
subsets=sub_lists(l)
