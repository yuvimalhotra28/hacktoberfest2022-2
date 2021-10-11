# problem link :- https://practice.geeksforgeeks.org/problems/print-anagrams-together/1

class Word(object):
    def __init__(self, string, index):
        self.string = string
        self.index = index
 

def createDupArray(string, size):
    dupArray = []
 

    for i in xrange(size):
        dupArray.append(Word(string[i], i))
 
    return dupArray
 

def printAnagramsTogether(wordArr, size):

    dupArray = createDupArray(wordArr, size)
 

    for i in xrange(size):
        dupArray[i].string = ''.join(sorted(dupArray[i].string))
 

    dupArray = sorted(dupArray, key = lambda k: k.string)
 

    for word in dupArray:
        print wordArr[word.index],
 
wordArr = ["cat", "dog", "tac", "god", "act"]
size = len(wordArr)
printAnagramsTogether(wordArr, size)

