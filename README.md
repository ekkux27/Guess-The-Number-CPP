# 🎯 Guess the Number - C++

A simple, interactive number guessing game built using C++. The computer generates a random number between 1 and 100, and the player gets 7 attempts to guess it correctly.

## 🎮 How to Play

1. Run the program.
2. The computer randomly selects a secret number between 1 and 100.
3. Enter your guess when prompted.
4. Follow the hints:
   - **Too low:** Try a higher number.
   - **Too high:** Try a lower number.
5. Guess the correct number within 7 attempts to win!

If you run out of attempts, the game reveals the secret number.

## ✨ Features

- Random number generation
- 7 attempts per game
- Helpful high/low hints
- Win and lose messages
- Displays the number of attempts used when you win

## 🛠️ Technologies Used

- **Language:** C++
- **Libraries:** `iostream`, `cstdlib`, `ctime`
- **Tools:** Visual Studio Code, Git, GitHub

## 💻 Getting Started

### Prerequisites

- A C++ compiler such as GCC or MinGW
- Git (optional, for cloning the repository)

### Installation

Clone the repository:

```bash
git clone https://github.com/YOUR-USERNAME/Guess-The-Number-CPP.git
```

Navigate into the project folder:

```bash
cd Guess-The-Number-CPP
```

### Compile and Run

Using GCC or MinGW on Windows:

```bash
g++ GuessTheNumber.cpp -o GuessTheNumber
.\GuessTheNumber.exe
```

On Linux or macOS:

```bash
g++ GuessTheNumber.cpp -o GuessTheNumber
./GuessTheNumber
```

## 📸 Example Gameplay

```text
============================
     GUESS THE NUMBER!
============================
I have selected a number from 1 to 100.
You have 7 attempts to guess it.

Attempt 1/7: Enter your guess: 50
Too low! Try a higher number.

Attempt 2/7: Enter your guess: 75
Too high! Try a lower number.
```

*Note: The secret number and hints will vary with each game.*

## 📚 What I Learned

- Using variables and data types in C++
- Generating random numbers
- Working with `if`, `else if`, and `else`
- Using `for` loops
- Taking user input with `cin`
- Displaying output with `cout`
- Using Git and GitHub to manage a project

## 🚀 Future Improvements

- [ ] Add difficulty levels
- [ ] Add a replay option
- [ ] Validate incorrect user input
- [ ] Introduce a scoring system
- [ ] Track the best score across rounds

## 👨‍💻 Author

**Eklavya**

- GitHub: [@ekkux27](https://github.com/ekkux27)

---

*Built as part of my C++ learning journey.*