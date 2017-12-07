del bin\*.pas.exe
for %%f in ("pas\*.pas") do fpc -WG "%%f" -o"bin\%%~nf.pas.exe" -Os
del bin\*.ppu /q
del bin\*.o /q
del bin\lib*.a /q
pause