🏷️ Author
Zaviq Alnour

 Guessing-A-number-Game-
This C program generates a random number between 1 and 100. The user must guess the number, and after each guess, the program hints whether to guess higher or lower. It counts the number of attempts and congratulates the user once the correct number is guessed.
 Guess the Number Game (C Language)

  Description
A simple and fun **C program** where the computer randomly selects a number between **1 and 100**, and the player tries to guess it.  
After each guess, hints are given   
- “Guess higher!” if your number is too low  
- “Guess lower!” if your number is too high  
Once you guess correctly, the program congratulates you and shows the total number of attempts.
 Features
- Generates random numbers using `rand()`  
- Uses `srand(time(NULL))` for different results each run  
- Counts total attempts  
- Provides real-time hints  
 Header Files Used
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Welcome to Guess the Number Game!
I have selected a number between 1 and 100.
Can you guess what it is?
Enter your guess: 50
Guess higher!
Enter your guess: 75
Guess lower!
Enter your guess: 68
Congratulations! You have guessed the number 68 in 4 attempts.

How to Run
Save the code as guess.c

Compile using:
gcc guess.c -o guess

Run the program:
./guess
