del bin\*.cpp.exe
for %%f in ("cpp\*.cpp") do g++ -o "bin\%%~nf.cpp.exe" "%%f" bin\disp.dll -static -mwindows -Os
pause