@echo off
Wmic OS Get Caption|Find /i "Windows XP">nul&& goto xp 
Wmic OS Get Caption|Find /i "Windows 7">nul&& goto win7
Wmic OS Get Caption|Find /i "Windows 10">nul&& goto win7
Wmic OS Get Caption|Find /i "Windows 8">nul&& goto win7
pause&exit
:win7
set TempFile_Name=%SystemRoot%\System32\BatTestUACin_SysRt%Random%.batemp
( echo "BAT Test UAC in Temp" >%TempFile_Name% ) 1>nul 2>nul
if exist %TempFile_Name% (
  ECHO Got Administrator Privilege
) else (
  ECHO Cannot get Administrator Privilege...
  ECHO It will popup the UAC dialog, please click [Yes] to continue.
  ECHO Set UAC = CreateObject^("Shell.Application"^) > "%temp%\getadmin.vbs"
  ECHO UAC.ShellExecute "cmd.exe", "/k %~s0 %*", "", "runas", 1 >> "%temp%\getadmin.vbs"
  "%temp%\getadmin.vbs"
  exit /b 2
)
ECHO �������������������С���������������
taskkill /F /IM "�ۺ��������ƽ̨.exe">nul 2>&1
ping 127.0.0.1 -n 10 >null
echo �������ѹر�Ӧ�ó��򣬿�ʼ����������
set ChromeDataDir=%~dp0
set ChromeCache=%ChromeDataDir%.cache
del /f /s /q "%ChromeCache%"
del /f /s /q "%ChromeCache%*.*"
rd /s /q  "%ChromeCache%" 
del /q /f "%ChromeDataDir%*Cookies*.*">nul 2>&1    
del /q /f "%ChromeDataDir%*History*.*">nul 2>&1
ECHO ������������ �������  ����������������
ping 127.0.0.1 -n 5 >null
exit
:xp
ECHO �������������������С���������������
taskkill /F /IM "�ۺ��������ƽ̨.exe">nul 2>&1
ping 127.0.0.1 -n 10 >null
echo �������ѹر�Ӧ�ó��򣬿�ʼ����������
set ChromeDataDir=%~dp0
set ChromeCache=%ChromeDataDir%.cache
del /f /s /q "%ChromeCache%"
del /f /s /q "%ChromeCache%*.*"
rd /s /q  "%ChromeCache%" 
del /q /f "%ChromeDataDir%*Cookies*.*">nul 2>&1    
del /q /f "%ChromeDataDir%*History*.*">nul 2>&1
ECHO ������������ �������  ����������������
ping 127.0.0.1 -n 5 >null
exit