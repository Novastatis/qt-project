# qt-project

//Creating .pro file

//Building for Linux:
Building for Windows:
  //qmake
  Include this libs in app dir: 
    - Qt6Core.dll
    - Qt6Gui.dll
    - Qt6Widgets.dll
    - libstdc++-6.dll
    - libgcc_s_seh-1.dll
  Also use included with qt-sdk windeployqt.exe tool to generate essential files:
    windeployqt.exe [path_to_app_dir]
