// Problem Link: https://codeforces.com/problemset/problem/275/A

mat = []
for i in range(3):
    row = list(map(int, input().split()))
    mat.append(row)
ini = [[1 for col in range(3)] for row in range(3)]
for i in range(3):
    for j in range(3):
        if mat[i][j] % 2 == 1:
            ini[i][j] = 1-ini[i][j]
            if i > 0:
                ini[i-1][j] = 1-ini[i-1][j]
            if i < 2:
                ini[i+1][j] = 1-ini[i+1][j]
            if j > 0:
                ini[i][j-1] = 1-ini[i][j-1]
            if j < 2:
                ini[i][j+1] = 1-ini[i][j+1]
for i in range(3):
    for j in range(3):
        print(ini[i][j], sep="", end="")
    print()
