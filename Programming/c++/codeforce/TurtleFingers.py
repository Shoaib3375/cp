import math

def solve():
    a, b, l = map(int, input().split())
    loop_vala = int(math.log(1) / math.log(a))
    loop_valb = int(math.log(1) / math.log(b))
    s = set()
    for i in range(loop_vala + 2):
        for j in range(loop_valb + 2):
            anew = a ** i
            bnew = b ** j
            prod = anew * bnew
            if l % prod == 0:
                s.add(prod)
    print(len(s))

def main():
    t = int(input())
    for i in range(t):
        solve()

if __name__ == "__main__":
    main()
