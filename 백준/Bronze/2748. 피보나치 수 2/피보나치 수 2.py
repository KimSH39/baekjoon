n = int(input())


def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1

    pre2, pre1 = 0, 1

    for i in range(2, n + 1):

        # 0(=pre2) 1(pre1) 1(=cur)
        cur = pre1 + pre2

        pre2, pre1 = pre1, cur

    return pre1


print(fib(n))
