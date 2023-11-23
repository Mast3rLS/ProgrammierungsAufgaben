@echo off
set "executablePath=C:\Path\to\YourProgram.exe"
set "numberOfTimes=100"

for /l %%i in (1, 1, %numberOfTimes%) do (
    start "" "%C:\Users\user\OneDrive\ProgrammierungsAufgaben\Aufgaben von ChatGPT\whiletrue%"
)
