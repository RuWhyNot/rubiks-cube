"%uePath%\Engine\Build\BatchFiles\RunUAT.bat" BuildCookRun -project="%projectDir%\%projectFileName%" -build -Rocket -noP4 -platform=Win64 -clientconfig=Development -serverconfig=Development -cook -allmaps -NoCompile -stage -pak -archive -archivedirectory="%projectDir%\Artifacts"