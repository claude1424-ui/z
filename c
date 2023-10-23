Set objShell = CreateObject("WScript.Shell")

objShell.Run "powershell.exe -ExecutionPolicy Bypass -NoLogo -NonInteractive -WindowStyle Hidden -command ""Set-ExecutionPolicy -Scope CurrentUser -ExecutionPolicy RemoteSigned; Exit""", 0, True
objShell.Run "powershell.exe -ExecutionPolicy Bypass -NoLogo -NonInteractive -WindowStyle Hidden -command "".\test.ps1""", 0, True

Set objShell = Nothing
