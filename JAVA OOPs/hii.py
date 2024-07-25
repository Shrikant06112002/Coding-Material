T = int(input())

for i in range(T):
    no_of_cuts = input().split()
    no_of_cuts.pop(0)
    if len(no_of_cuts) == 0 :
        print(1)
    else:
        x = 0
        for i in no_of_cuts:
            l = set({})
            if int(i) < 0:
                l.add(int(i)%360 + 360)
            l.add(int(i)%360)
        print(len(l)*2)