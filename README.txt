# VS Code C++ one-click run (Windows)

## Files
- Copy this `.vscode` folder into your project, merging/replacing the matching settings files.
- Copy `run-cpp.bat` into the project root (the same folder as `main.cpp`, `input.txt`, and `output.txt`).

## Run with one click
1. Save `main.cpp`.
2. Click the small arrow next to the top-right Run button.
3. Select **Run Code** (Code Runner), NOT **Run C/C++ File** and NOT **Debug C/C++ File**.
   - Default Code Runner shortcut: `Ctrl+Alt+N`.
4. The script closes a running process named `main.exe`, compiles with `g++`, then runs using `input.txt` and writes `output.txt`.

You can also use Terminal > Run Task > `C++: Run with input.txt`.

## Important
- The compiler path must be `C:\\msys64\\ucrt64\\bin\\g++.exe`.
- The project root must contain `main.cpp` and `input.txt`.
- This deliberately runs to `output.txt` rather than showing program output in the terminal.
- `taskkill /F /IM main.exe` terminates any Windows process named `main.exe`. Don't use that executable name for another unrelated program while this setup is in use.
