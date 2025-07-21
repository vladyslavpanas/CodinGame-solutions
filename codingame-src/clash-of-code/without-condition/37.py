n = int(input())
for i in range(n):
    a_1, a_2 = [int(j) for j in input().split()]
    total = a_1 + a_2
    if total == 180:
        print("SUPPLEMENTARY")
    elif total == 90:
        print("COMPLEMENTARY")
    else:
        print("NEITHER")