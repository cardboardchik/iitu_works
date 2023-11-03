a = [1, 1, 2, 3, 4, 4]




# def histogram(a, bin_width):
#     if not a:
#         return []
#     d = {}

#     for i in a:
#         # if d[f"{i}"]:
#         #     print("123")
#         d.update({f"{i}": 0})

#     for i in a:
#         d[f"{i}"] += 1

#     sort_d = dict(sorted(d.items()))

#     for i in range(int(list(sort_d.items())[-1][0]) + 1):
#         try:
#             sort_d[f"{i}"]
#         except KeyError:
#             sort_d.update({f"{i}": 0})

#     sort_d = list(dict(sorted(sort_d.items())).values())

#     ans = []

#     for i in range(0, len(sort_d), bin_width):
#         k = 0
#         for j in range(bin_width):
#             try:
#                 k += sort_d[i + j]
#             except IndexError:
#                 pass
#         ans.append(k)
    
#     return ans

def histogram(values: list, width: int) -> list:
    res = [0] * (max(values, default=-1) // width + 1)
    for value in values:
        res[value // width] += 1
    return res

print(histogram([7, 7, 6, 6, 3, 3, 2, 1, 1, 0, 1, 1, 3, 1], 2))