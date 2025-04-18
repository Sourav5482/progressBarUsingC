# Progress Bar Simulation in C

## Description
This program simulates a **progress bar** for a task using C.  
It dynamically updates the progress in the console, showing how much work is done with a moving progress bar.
## Example output
```
Task 1: [=====                         ] 20%
Task 1: [==========                    ] 40%
Task 1: [===============               ] 60%
Task 1: [====================          ] 80%
Task 1: [==============================] 100%
Task completed
```

---

## How It Works
- The program uses a `calculate(int id)` function to simulate task progress.
- It generates a random step between 1 and 5 for realistic progress speed.
- It clears and redraws the console each second to show the updated progress.
- The task completes when the progress reaches 100%.

---

## Functions

### `cls()`
- Clears the console screen.
- Works for both Windows (`cls`) and Linux/macOS (`clear`).

### `calculate(int id)`
- Displays a dynamic progress bar.
- Progress updates every second based on a random step.
- Ends when the task reaches 100%.

---

## Dependencies
- `stdio.h` — Standard Input/Output
- `stdlib.h` — Standard Library (for `rand()`, `srand()`)
- `time.h` — Time functions (for `time(0)`)
- `unistd.h` — Sleep function (for Linux/macOS)

**Note:**  
- If compiling for Windows, replace `sleep(1)` with `Sleep(1000)` and include `windows.h`.

---

## How to Compile and Run
```bash
gcc yourfile.c -o progressbar
./progressbar
```
## 🙌 Author

- **Sourav Das**
- 📧 Portfolio: [sourav5482.github.io](https://sourav5482.github.io/Portfolio/)

---

## 📜 License

This project is licensed under the MIT License - feel free to use and modify it.
