# Introducing Tic-Tac-Toe and Digital Calculator

This repository features two interactive C++ projects: **Tic-Tac-Toe**, a two-player competitive game, and **Digital Calculator**, a versatile tool for various mathematical operations.


## TABLE OF CONTENTS  

1. [TIC-TAC-TOE 🎮](#tic-tac-toe-)  
   - [KEY FEATURES ](#tic-tac-toe-key-features-)  
   - [USER GUIDE ](#tic-tac-toe-user-guide-)  
2. [DIGITAL CALCULATOR 🧮](#digital-calculator-)  
   - [KEY FEATURES ](#digital-calculator-key-features-)  
   - [USER GUIDE ](#digital-calculator-user-guide-)  

---

## **TIC-TAC-TOE** 🎮  

A console-based implementation of the Tic-Tac-Toe game in C++. It allows two players to play the classic game on a 3x3 board. Perfect for a quick competitive game, the program checks for winners, ties, and tracks the scores for both players.  

### KEY FEATURES ✨  

- **Two-Player Gameplay:** Players enter their names and compete as X and O.  
- **Move Validation ✅:** Ensures that no invalid or duplicate moves are made.  
- **Play Again Option 🔄:** Allows players to restart and enjoy multiple rounds without restarting the program.  
- **Leaderboard Display 🏆:** Tracks and shows scores for both players along with the total number of games played.  
- **Interactive Console Interface 🎮:** Provides a user-friendly console interface for a smooth gameplay experience.  

### USER GUIDE 📋  

#### Start the Game 🚀  

- Upon running the program, you’ll be prompted to enter the names of Player X and Player O.  

#### Gameplay 🎲  

- Players take turns selecting their moves.  
- Enter the row and column (values between 0 and 2) where you want to place your mark.  
- The game validates each move and updates the board accordingly.  

#### Winning and Ties 🏅  

- A player wins when they align three of their marks (X or O) in a row, column, or diagonal.  
- A tie is declared if the board is full without any winner.  

#### Leaderboard 🏆  

- After every round, the leaderboard displays:  
  - Player names  
  - Scores of both players  
  - Total games played  

#### Play Again or Exit 🔄  

- To continue playing, type `Y` when prompted.  
- To exit, type `N`. The program will display a farewell message before closing.  

--------

## **DIGITAL CALCULATOR** 🧮  

A console-based calculator implemented in C++ that supports basic arithmetic, advanced mathematical functions, and trigonometric calculations. This program provides an interactive menu-based interface for users to choose their desired operations.  

### KEY FEATURES ✨  

- **Basic Arithmetic Operations 🔢:** Addition, subtraction, multiplication, division, and percentages.  
- **Advanced Mathematical Functions 🧠:** Factorial (!), exponentiation (^), square root (S), and cube root (R).  
- **Trigonometric Functions 📐:** Sine (s), cosine (c), and tangent (t).  
- **Logarithmic Functions 📊:** Base-10 logarithm (g) and natural logarithm (n).  
- **Interactive Console Interface 🎮:** User-friendly, menu-based design.  
- **Restart Feature 🔄:** Press `R` to restart the program and return to the main menu for new calculations.  
- **Error Handling 🚫:** Handles invalid inputs, such as division by zero, gracefully.  

### USER GUIDE 📋  

#### Start the Calculator 🚀  

- Run the program to view the menu displaying all available operations.  

#### Using the Calculator 🧮  

- Enter the character corresponding to the desired operation (e.g., `+` for addition, `s` for sine).  
- Provide the inputs as prompted.  
- View the result displayed neatly in the console.  

#### Operations Supported 🔢  

- **Basic Operations:** `+`, `-`, `*`, `/`, `%`.  
- **Factorial:** `!`.  
- **Power and Roots:** `^`, `S`, `R`.  
- **Trigonometric Functions:** `s`, `c`, `t`.  
- **Logarithms:** `g`, `n`.  

#### Errors handling🚫  

- **Division by Zero:** Displays an error message without crashing.  
  - Example: Entering `1 / 0` will prompt a "Division by zero is not allowed" message.  
- **Invalid Inputs:** Issues warnings for undefined operations, such as negative square roots or logarithms of non-positive values.  

#### Exit or Restart 🔄  

- **Exit:** Press `E` to exit the program smoothly.  
- **Restart:** Press `R` when prompted to clear the previous session and return to the main menu for a new calculation.  

---

Feel free to contribute to this project by submitting pull requests or reporting issues! 🚀  
