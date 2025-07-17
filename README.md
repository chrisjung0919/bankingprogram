# Simple Banking Program

This is a basic C++ console-based banking simulation that allows users to view their balance, deposit money, withdraw money, and quit the program.

## Features

- ✅ View current balance
- ✅ Deposit money
- ✅ Withdraw money (with balance check)
- ✅ Input validation for invalid menu options
- ✅ Formatted output with 2 decimal places

## How It Works

When the program starts, the user sees their current balance (starting at `$0.00`) and is asked to choose an action:

- **`a`**: Deposit money  
- **`b`**: Withdraw money (if funds are sufficient)  
- **`q`**: Quit the program  

If the user enters anything else, the program displays an "Invalid choice" message.

### Example Interaction:

```
========================================
         Welcome to the Banking App
========================================

Your current balance is: $0.00

Thank you for banking with us!

Enter choice (a - Deposit b - Withdraw q - quit): a
Enter deposit amount: 200.00
```

## How to Compile

Use the following command to compile:

```bash
g++ -o banking banking.cpp
```

Then run it with:

```bash
./banking
```

## Requirements

- C++11 or newer
- Standard C++ libraries only (`iostream`, `iomanip`)

## Author

Created by Christopher Jung (2025)  
A beginner-friendly project to practice conditionals, loops, and user input in C++
