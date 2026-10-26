
@echo off
setlocal

set "SRC=%~1"

if not defined SRC (
    echo Please provide a C++ source file.
    exit /b 1
)

REM Get the source file's directory
for %%F in ("%SRC%") do (
    set "DIR=%%~dpF"
    set "EXE=%%~dpnF.exe"
)

REM Compile the source file
if exist "%EXE%" del "%EXE%" >nul 2>&1

"C:\msys64\ucrt64\bin\g++.exe" -std=c++17 -Wall -Wextra "%SRC%" -o "%EXE%"

if errorlevel 1 exit /b 1

REM Run using input/output files beside the source file
"%EXE%" < "%DIR%input.txt" > "%DIR%output.txt"

if errorlevel 1 exit /b 1

echo Finished. Check output.txt in the source folder.
