#Circular Identical
#Made By Seungmo Ku
#2021042988
import sys

str1 = input ("Input first string : ")
str2 = input ("Input second string : ")

def notI () :
    print ("Not Circular Identical!")
    sys.exit()

if len(str1) != len (str2) :
    notI()
else :
    startP = []
    counter = []
    passed = []
    #첫번째 글자가 중복될 수도 있으니 배열로 전부 확인
    for a in range (0, len(str1)) :
        if not str1[a] in str2 :
            notI ()
            break
        if str2[a] == str1[0] :
            startP.append (a) #시작점 후보들 모두 배열에 넣어서 확인해야함
            counter.append (0)
            passed.append (0)
    for a in range (0, len(startP)) :
        if startP[a] == 0 :
            if str1 == str2 :
                print ("Just identical")
                sys.exit()
        while startP[a] + counter[a] != startP[a] - 1 :
            if str2[startP[a] + counter[a]] != str1[counter[a]] :
                passed[a] = 1
                break
            counter[a] += 1
            if startP[a] + counter[a] >len(str1) -1 :
                counter[a] -= len(str1) #counter를 초기화해줘야 첫번째 자리로 돌아감.
        if passed[a] == 0 : #안 걸렸으면 결과문 출력
            print ("Circular string to right %d times." %(len(str1)-startP[a]))
            sys.exit()
    notI ()    
