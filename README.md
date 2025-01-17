# Number Guesser

## Functions

** main **
```
create string variable name
name = input("Hi, what is your name?")
print("Nice to meet you %s. Lets have some fun!", name)
create int variable random assigned with random between 1 and 100
create int variable guessedNumber assigned with 0
create int variable guesses assigned with 0
create bool variable keepGoing assigned with true
while keepGoing:
    assign guesses with guesses + 1
    print("turn %d)", guesses)
    guessedNumber = input as int("Enter a guess between 1 and 100: ")
    if (guessedNumber > random):
        print("too high")
        continue
    if (guessedNumber < random):
        print("too low")
        continue
    print("You got It!")
    assign keepGoing with false
if (guesses < 7):
    print("Great job.")
    return;
if (guesses == 7):
    print("You did okay.")
    return;
print("You could do better.")
return;
``` 
