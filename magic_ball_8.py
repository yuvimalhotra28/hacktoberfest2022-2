
You are here: Home / Code Snippets / Magic 8-ball written in Python
Magic 8-ball written in Python
Author: Dhananjay Porwal
Last Updated: August 27, 2020

Overview
The Magic 8 Ball is a toy used for fortune-telling or seeking advice.

Magic 8-ball written in Python
In this script I’m using 8 possible answers, but please feel free to add more as you wish. There are 20 answers inside the Magic 8 Ball, and you can find them all here

# Import the modules
import sys
import random

ans = True

while ans:
    question = raw_input("Ask the magic 8 ball a question: (press enter to quit) ")
    
    answers = random.randint(1,8)
    
    if question == "":
        sys.exit()
    
    elif answers == 1:
        print "It is certain"
    
    elif answers == 2:
        print "Outlook good"
    
    elif answers == 3:
        print "You may rely on it"
    
    elif answers == 4:
        print "Ask again later"
    
    elif answers == 5:
        print "Concentrate and ask again"
    
    elif answers == 6:
        print "Reply hazy, try again"
    
    elif answers == 7:
        print "My reply is no"
    
    elif answers == 8:
        print "My sources say no"
