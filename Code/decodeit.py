alpha=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p']
for test in range(int(input())):
    number=int(input())
    source=input()
    string=''
    for itera in range(0,number-3,4):
        string+=alpha[int(source[itera:itera+4],2)]
    print(string)
