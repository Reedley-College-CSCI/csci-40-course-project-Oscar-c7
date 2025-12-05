[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/7mdzU3H2)
# CS1 Final Project - [Soccer Stats Tracker]
Oscar Castellanos
## 1. Overview
- What problem does your project solve? 
Well my project is Soccer Stats Tracker, it helps manage and organize player statistics for soccer teams.
Making it easier for the user to track player performance with quick and easy access. 
Without this coachs would have to enter goals, assists, games played manually makeing it time consuming.

- Briefly describe the purpose and key features of your program. 
The purpose of my program is to manage and track player statistics for a team in a quick and organized way. 
This program allows users to monitor players performences on the pitch. 

---

## 2. Design Decisions
- What fundamental programming constructs and data types did you use, and why? 
 I used a struct to define a player with the use of a string and int to store names, goals, assists, and games played. I also used a vector which holds all players.
 To manage the the program i used loops, conditionals, and functions manage program flow. File i/o saves and loads data between sessions.

- Why did you choose to structure your data using structs? 
 It allows me to group all my data in a single organized unit. 
 As well this allows for the passing and storing player data efficiently in vectors.

- How did you implement searching and sorting? What algorithms did you use and why? 
 Searching in my program is with a vector and sorting in my program is simple i used a linear search.

- How do you ensure data persistence between program runs?
  I used a text file to save the player information and whenever changes are made or the user chooses to save and exit. This is how all player stats are saved between program runs.

- Did you consider alternative approaches? If so, why did you not use them?
   I considered using arrays instead of vectors but vectors seemed more simple than arrays. Vectors being more flexible in adding player information. 
   

---

## 3. Testing Summary
- **Structured Testing Log:** Include a table with test cases, expected output, actual output, and pass/fail status.  
- What testing methods did you use?  
- Provide examples of test inputs (valid and invalid) and describe how your program responds.   Soccer Stats Tracker
1. Add Player
2. View Players
3. Update Player
4. Remove Player
5. Show Top Scorer
6. Show Average Goals
7. Search Player by Name
8. Sort Players by Goals
9. Save & Exit
Enter your choice: 

7

Enter player name to search: Benzema

Player Found:
6. Benzema | Goals: 45 | Assists: 23 | Games Played: 90

Soccer Stats Tracker
1. Add Player
2. View Players
3. Update Player
4. Remove Player
5. Show Top Scorer
6. Show Average Goals
7. Search Player by Name
8. Sort Players by Goals
9. Save & Exit
Enter your choice: ABC

Invalid input. Please enter a number between 1 and 9.

---

## 4. Technical Walkthrough
- Explain the main functionality of your program.  
- **Include a link to your required video demonstration** showcasing how the project works (**3-7 minutes**). 
    Make sure it shareable without approval needed.
https://youtu.be/DoXy_7E3lY8

---

## 5. Challenges and Lessons Learned
- What challenges did you encounter while working on this project? 
I encounterd crashes in my program output when i would enter anything besides a number. I solved this issue by adding an if statement that allowed input validation.

- What key lessons did you learn about programming and problem-solving? 
I learned that you really have to think and pay close attention to the program you are writing. Because the slighest of mistakes will make you program break. Also sometimes you are going to overthink when trying to problem solve my partner and me ran into this more often that we would have liked.  

---

## 6. Future Improvements
- If you had more time, what changes or enhancements would you make? 
I would add more feautures to my program like per player stats within the team and how performance could influence award winning. 
