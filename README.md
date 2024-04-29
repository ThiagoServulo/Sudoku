# Sudoku Game

This is a Sudoku game developed in C++ with the Qt library. Sudoku is a logic puzzle where the objective is to fill a 9x9 grid with digits from 1 to 9, so that each column, row, and 3x3 subgrid contains all numbers from 1 to 9 without repetition.


## Key Features

* **Intuitive Graphical Interface:** The graphical interface allows easy and intuitive interaction with the game.

* **Random Board Generation:** Every time the game is started, a new Sudoku board is randomly generated.

* **Real-Time Validation:** The game automatically validates user inputs, indicating errors in real-time.


## How to Play

* Upon starting the game, a random board will be generated.

* Use the mouse to click on empty cells and input a number from 1 to 9.

* Click again on a cell to remove a number, if necessary.

* Cells filled by the game cannot be altered.

* If an entered number conflicts with any other number in the same row, column, or 3x3 quadrant, those cells will be highlighted to alert the user that adjustments are needed.

* Upon filling all cells, validation will be performed to check if the Sudoku is complete. If so, you win the game.


## Starting a New Game

To start a new game, simply finish the current game, where the player can decide whether to start a new game or not. The player can also start a game at any time by clicking the "New game" button.


## Board

![Board example](/images/board.png)

![Board during game](/images/board_2.png)

---


## Backtracking

This Sudoku game features a special functionality that allows the user to see the Sudoku solution in real-time using the backtracking algorithm. Just click on the "Solve using backtracking" button.


### What is Backtracking?

Backtracking is a recursive search algorithm used to solve decision problems, such as Sudoku. It works by exploring all available possibilities at a given moment. When an invalid solution is encountered, the algorithm backtracks to try a different solution.

In the context of Sudoku, the backtracking algorithm attempts to fill empty cells with valid numbers. If a cell cannot be filled with a valid number, the algorithm backtracks and tries another option. This process is repeated until all cells are filled and a valid solution is found.


### Resolution with Backtracking

By clicking "Solve using backtracking," you will see the algorithm in action, attempting to solve the Sudoku using this technique. You will observe, in real-time, the algorithm's attempts and errors, making necessary backtracks until reaching the final solution.


### Considerations

* **Sudoku Complexity:** Resolving more complex Sudokus may take longer, especially if there are multiple solutions or if the board is incomplete.

* **Learning:** Observing the backtracking algorithm in action can provide insights into solving similar decision problems.

* **Interactivity:** Although automatic resolution is available, the true challenge and fun of Sudoku lie in manually solving the puzzle!


### Solving

![Solving using backtracking](/images/sudoku.gif)