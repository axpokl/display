cd disp
del *.exe
del *.dll
fpc display_createlib.pas -Os
display_createlib
fpc display_library.pas -Os
rename display_library.dll disp.dll
::del *.ppu /q
::del *.o /q
del lib*.a /q
lib /def:disp.def /OUT:disp.lib
type display_library_type.h >disp.h
type display_library_var.h >>disp.h
type display_library_fun.h >>disp.h
copy /y disp.dll ..\bin /b
copy /y display.pp ..\pas /a
copy /y disp.h ..\cpp /a
cd ..
pause