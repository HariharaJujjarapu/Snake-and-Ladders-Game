# Snake and Ladders Game

## Overview

This C program implements a simple console-based Snake and Ladders game for two players. The players take turns rolling a dice and move forward on the game board, encountering snakes and ladders along the way.

## Features

- **Player Turns**: Players take turns to roll a dice and move on the board.
- **Snakes and Ladders**: Special tiles on the board represent snakes and ladders, influencing the player's progress.
- **Consecutive Sixes**: Rolling a six gives the player another chance.

## How to Play

1. **Compile the Code:**
   - Ensure you have a C compiler installed (e.g., GCC).
   - Compile the program:
     ```bash
     gcc snake_and_ladders.c -o snake_and_ladders
     ```

2. **Run the Game:**
   - Execute the compiled program:
     ```bash
     ./snake_and_ladders
     ```
   
3. **Gameplay:**
   - Enter the player number (1 for Player 1, 2 for Player 2).
   - Roll the dice by pressing Enter.
   - The player's position updates based on the dice result and the presence of snakes or ladders.

4. **Game End:**
   - The game ends when one of the players reaches or exceeds position 100.
   - The winner is declared accordingly.

## Special Tiles

- **Snakes:**
  - 51 ➔ 11
  - 56 ➔ 15
  - 62 ➔ 57
  - 92 ➔ 53
  - 98 ➔ 8

- **Ladders:**
  - 2 ➔ 38
  - 4 ➔ 14
  - 9 ➔ 31
  - 33 ➔ 85
  - 52 ➔ 88
  - 80 ➔ 99

## Contributing

If you'd like to contribute to the development of this Snake and Ladders game, feel free to fork the repository and submit pull requests.

## Credits

- **Author:** Harihara Jujjarapu
- **Contact:** saiharihara.j2610@gmail.com

Enjoy the game!
