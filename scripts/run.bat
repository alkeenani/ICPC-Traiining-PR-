@echo off
setlocal

set "SRC=%~1"
if not defined SRC (
    echo Usage: run.bat ^<file.cpp^>
    exit /b 1
)

set "ROOT=%~dp0.."
set "BUILD=%ROOT%\build"
set "EXE=%BUILD%\%~n1.exe"

if not exist "%BUILD%" mkdir "%BUILD%"
if not exist "%ROOT%\input.txt" type nul > "%ROOT%\input.txt"

"C:\msys64\ucrt64\bin\g++.exe" -std=c++17 -Wall -Wextra -g "%SRC%" -o "%EXE%" || exit /b 1
"%EXE%" < "%ROOT%\input.txt" > "%ROOT%\output.txt" || exit /b 1

echo Finished. Check output.txt