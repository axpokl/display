cd disp
fpc pas2c.pas -Os
del *.ppu /q
del *.o /q
del lib*.a /q
cd..
del cpp\*.cpp
for %%f in ("pas\*.pas") do disp\pas2c "pas\%%~nf.pas" "cpp\%%~nf.cpp"
pause