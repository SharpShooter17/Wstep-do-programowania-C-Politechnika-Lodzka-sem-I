@echo off

set path=%PATH%;C:\Program Files (x86)\CodeBlocks\MinGW\bin
gcc 11.3.c sort.c -o 11.3.exe -Wall -pedantic -std=iso9899:199409

11.3.exe

%errorlevel%

pause