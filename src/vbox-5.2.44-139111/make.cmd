@echo off
pushd %~dp0
if exist out_w32 rd /s /q out_w32
md out_w32
cd out_w32

cl -nologo -LD -O2 -DWIN32_LEAN_AND_MEAN -c ../kernel31.c || goto end
link -nologo kernel31.obj kernel32.lib -def:../kernel31.def -out:kernel31.dll -fixed:no || goto end
echo.
echo. Build successful!

:end
popd
exit/b
