@echo OFF
cd exercises
mkdir "..\tmp" > nul
gcc -std=c89 "%1.c" -o "..\tmp\%1.exe"
cd ..
"tmp\%1.exe"
del "tmp\" /Q /S > nul
rmdir "tmp\"