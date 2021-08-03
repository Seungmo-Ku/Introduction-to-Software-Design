import random
import pdb
import sys
pics = ['''
 +--+
    |
    |
    |
    |
    |
=======''','''
 +--+
 o  |
    |
    |
    |
    |
=======''', '''
 +--+
 o  |
 |  |
    |
    |
    |
=======''', '''
 +--+
 o  |
 |  |
 |  |
    |
    |
=======''', '''
 +--+
 o  |
 |  |
/|  |
    |
    |
=======''','''
 +--+
 o  |
 |  |
/|/ |
    |
    |
=======''','''
 +--+
 o  |
 |  |
/|/ |
/   |
    |
=======''','''
 +--+
 o  |
 |  |
/|/ |
/ / |
    |
=======''']

def gameStart() :
    global step
    step = 0
    print ("Hangman Game")
    randomP ()
def randomP() :
    global secretWord
    wd = random.randint (0, len(words)-1)
    secretWord = words[wd]
def showPic() :
    global step, secretWord, correctWord, missedWord
    print (pics[step])
    print ("guessed alphabet : ", end = "")
    for a in range (0, len(missedWord)) :
        print (missedWord[a], end = " ")
    print()    
    for a in range (0, len(secretWord)) :
        if secretWord[a] in correctWord :
            print (secretWord[a], end = " ")
        else :
            print ("_", end = " ")
    print()
            
def getWord() :
    global step, correctWord, secretWord, missedWord
    showPic()
    alphabet = input ("Guess an alphabet : ")
    if len(alphabet) != 1 :
           print ("wrong input")
           getWord()
    elif alphabet in missedWord+correctWord :
        print ("already guessed word")
        getWord()
    elif alphabet in secretWord :
        correctWord.append (alphabet)
    else :
        missedWord.append (alphabet)
        step += 1
        print ("wrong guess!")
        
def retry() :
    global step, secretWord, correctWord, missedWord

    secretWord = ''
    correctWord = []
    missedWord = []
    print ("Would you try again? y or n")
    yon = input ()
    while yon[0] != 'y' and yon[0] != 'n' :
        yon = input ()
        print ("Would you try again? y or n")
    if yon[0] == 'y' :
        gameStart ()
        playingGame ()
    elif yon[0] == 'n' :
        step = 7
        sys.exit ()
        
        
            


def playingGame() :
    global step, secretWord, correctWord, missedWord
    while (step <= 6) :
        count = 0
        for a in range (0, len(secretWord)) :
            if secretWord[a] in correctWord :
                count += 1
        if count == len(secretWord) :
            print ("You won !!!!!")
            retry ()
            break
        getWord ()
    if (step == 7) :
        showPic()
        print ("Over!")
        print ("The answer was "+secretWord)
        retry ()

    
words = 'ant aunt elephant juice dictionary hanyang effort keen convenient present nevertheless experience though insight integrity induce zero zip yourself make downtown seoul'.split()
step = 0
secretWord = ''
correctWord = []
missedWord = []

gameStart ()
playingGame ()
