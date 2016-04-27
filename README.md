# Garrison_CSCI2270_FinalProject

Project Summary:
This project uses a binary tree data structure to implement a "choose your own adventure" type game. Users start at the root node and create their own story, traveling through the tree based on the choices they make. The game has a pre-set story with various outcomes already loaded in and ready to play. Other functionalities of the project include automatically creating a story by choosing randomly, showing specific stories based on what the user is in the mood for, displaying all possible outcomes, printing a completed story, backtracking in the tree if a user makes a mistake, a "what if" function that shows how the story would have ended with a different choice, and a function to make a single random choice if the user is unsure. 

How to run:
Build and run the main.cpp file. A terminal window will come up with a main game menu and show various options. One of the options explains everything else on the main menu if there is any confusion. 
In the main adventure mode (main menu option 1), enter "a" or "b" to make the different choices shown in the adventure, "q" to quit and return to the main menu, "r" to make a random choice, and "b" to backtrack to the previous node.

Dependencies:
A few libraries (in addition to iostream) are required for this project:
1. #include "stdlib.h"
2. #include "ctime"
3. #include "cstdlib"
4. #include <vector>
Just type as shown above on the project files; no other installation steps necessary.

System Requirements:
Linux

Group Members:
Megan Garrison

Contributors:


Open issues/bugs:
No known bugs. One enhancement could be a delete all nodes function.
