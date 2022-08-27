def get_bit(num, bit):
    temp = (1 << bit)
    temp = temp & num
    if temp == 0:
      return 0
    return 1

def get_all_subsets(v, sets):
    subsets_count = 2 ** len(v)
    for i in range(0, subsets_count):
      st = []
      for j in range(0, len(v)):
         if get_bit(i, j) == 1:
            st.append(v[j])
      sets.append(st)
subsets = []
arr=list(map(int,input().split())) # getting input
get_all_subsets(arr, subsets);
print(subsets)
