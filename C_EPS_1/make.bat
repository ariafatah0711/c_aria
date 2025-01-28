@REM @echo off
@REM gcc "%~1" -o "%~dpn1"
@REM "%~dpn1"

@echo off
gcc "%~1" -o "%~dpn1"
if errorlevel 1 (
    echo Kompilasi gagal!
    pause
) else (
    "%~dpn1"
    del "%~dpn1.exe"
)