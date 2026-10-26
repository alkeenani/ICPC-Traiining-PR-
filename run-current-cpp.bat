
@REM  @echo off
@REM  setlocal

@REM  set "SRC=%~1"

@REM  if not defined SRC (
@REM      echo Please provide a C++ source file.
@REM      exit /b 1
@REM  )

@REM  REM Get the source file's directory
@REM  for %%F in ("%SRC%") do (
@REM      set "DIR=%%~dpF"
@REM      set "EXE=%%~dpnF.exe"
@REM  )

@REM  REM Compile the source file
@REM  if exist "%EXE%" del "%EXE%" >nul 2>&1

@REM  "C:\msys64\ucrt64\bin\g++.exe" -std=c++17 -Wall -Wextra "%SRC%" -o "%EXE%"

@REM  if errorlevel 1 exit /b 1

@REM  REM Run using input/output files beside the source file
@REM  "%EXE%" < "%DIR%input.txt" > "%DIR%output.txt"

@REM  if errorlevel 1 exit /b 1

@REM  echo Finished. Check output.txt in the source folder.

@echo off
setlocal

set "ROOT=%~dp0"
set "SRC=%~1"

if not defined SRC set "SRC=%ROOT%main.cpp"

for %%F in ("%SRC%") do set "EXE=%%~dpnF.exe"

if exist "%EXE%" del "%EXE%" >nul 2>&1

"C:\msys64\ucrt64\bin\g++.exe" -std=c++17 -Wall -Wextra "%SRC%" -o "%EXE%"

if errorlevel 1 exit /b 1

"%EXE%" < "%ROOT%input.txt" > "%ROOT%output.txt"

if errorlevel 1 exit /b 1

echo Finished. Check output.txt