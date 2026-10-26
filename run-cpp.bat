@echo off
setlocal
cd /d "%~dp0"
if exist "%~dp0main.exe" taskkill /F /IM main.exe >nul 2>&1
"C:\msys64\ucrt64\bin\g++.exe" -std=c++17 -Wall -Wextra -g "%~dp0main.cpp" -o "%~dp0main.exe"
if errorlevel 1 exit /b 1
"%~dp0main.exe" < "%~dp0input.txt" > "%~dp0output.txt"
if errorlevel 1 exit /b 1
echo Finished. Check output.txt
