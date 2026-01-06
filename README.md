# RandomNumberGuess
A simple random number guessing game, the goal of the game is to guess a randomly generated number between 0 and 10.

The project was made to practice basic C++ concepts such as loops, conditionals, input validation, and random number generation.

How the game works

The program generates a random number between 0 and 10.
The user is asked to input a number in that range.
If the user enters a number outside the range, the program asks again.
If the guess is wrong, the program shows the correct number, generates a new one, and continues.
The game ends only when the user guesses the correct number.

------------------------------------------------
Concepts used

cin and cout (input and output)
Variables
if statements
do-while loops
Input validation
Random numbers using rand(), srand(), and time()

-------------------------------------------------
How to compile and run

Make sure you have a C++ compiler installed (like g++).

Compile:

g++ main.cpp -o guessing_game

Run:

./guessing_game

----------------------------------------------
Example output

Enter a number between 0 to 10

3

Wrong, try again!

The correct number was: 7

Enter a number between 0 to 10

7

Correct! Good job!!

---------------------------------------------
Purpose

This project was created as a beginner exercise to improve understanding of loops, conditionals, and user input handling in C++.

--------------------------------------------
Improvements

Will be added soon, such as: hints, retry, etc
