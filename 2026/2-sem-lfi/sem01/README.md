# Lesson 1
 
This lesson will be start to C++.

## Glossary

- Unix users: users that have MacOS or Linux;
- Windows users: like previous user but with Windows.

## Preparation

At the very beginning of each step in the list below you might find set of symbols
- ![WINDOWS](https://shields.fly.dev/badge/-W-blue): means that this is necessary for users of Windows
- ![Linux](https://shields.fly.dev/badge/-L-orange): means that this is necessary for users of Linux
- ![macOS](https://shields.fly.dev/badge/-M-lightgrey): means that this is necessary for users of MacOS

Step must be done at all systems, if no symbol at the very beginning.

1. ![WINDOWS](https://shields.fly.dev/badge/-W-blue)![macOS](https://shields.fly.dev/badge/-M-lightgrey)![Linux](https://shields.fly.dev/badge/-L-orange) Install [Visual Studio Code (VS Code)](https://code.visualstudio.com/download) and open it
2. ![WINDOWS](https://shields.fly.dev/badge/-W-blue)![macOS](https://shields.fly.dev/badge/-M-lightgrey)![Linux](https://shields.fly.dev/badge/-L-orange) Open extensions. You can find ,,bricks`` in the left panel. Also, you may call it via `ctrl+shift+X`.
3. ![WINDOWS](https://shields.fly.dev/badge/-W-blue)![macOS](https://shields.fly.dev/badge/-M-lightgrey)![Linux](https://shields.fly.dev/badge/-L-orange) Install C++ extensions for VS Code.
  - [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools).
  - [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack).
4. Install additional packages
  - ![WINDOWS](https://shields.fly.dev/badge/-W-blue) [MSYS2](https://www.msys2.org/).
  - ![WINDOWS](https://shields.fly.dev/badge/-M-lightgrey) [xcode-command-line tools](https://developer.apple.com/documentation/xcode/installing-the-command-line-tools).
  - ![WINDOWS](https://shields.fly.dev/badge/-L-orange) [gcc](gcc.gnu.org): `sudo apt install gcc`.
5. ![WINDOWS](https://shields.fly.dev/badge/-W-blue) Open MSYS2 and install necessary packages for C++.
  - `pacman -S gcc`.
6. ![WINDOWS](https://shields.fly.dev/badge/-W-blue) Update **System** environment variables.
  - Open **System** environment variables.

    ![](../misc/sem01/06-1b.png)

  - Push the button **environment variables** on the left lower corner of the window.

    ![](../misc/sem01/06-2b.png)

  - Choose `PATH` variable.
  - Press `Modify` button on the right side of window.

    ![](../misc/sem01/06-3b.png)

  - Press `Add` button.
  - Insert path to MSYS2 directory with suffix `\usr\bin`. It might be something like `C:\msys2\usr\bin`.

    ![](../misc/sem01/06-4b.png)

  - Save changes and close all windows.
7. ![WINDOWS](https://shields.fly.dev/badge/-W-blue)![macOS](https://shields.fly.dev/badge/-M-lightgrey)![Linux](https://shields.fly.dev/badge/-L-orange) Restart VS Code.
8. ![WINDOWS](https://shields.fly.dev/badge/-W-blue)![macOS](https://shields.fly.dev/badge/-M-lightgrey)![Linux](https://shields.fly.dev/badge/-L-orange) Open terminal: `ctrl+` `.
9. ![WINDOWS](https://shields.fly.dev/badge/-W-blue)![macOS](https://shields.fly.dev/badge/-M-lightgrey)![Linux](https://shields.fly.dev/badge/-L-orange) Call `gcc`, it might give next output:
```bash
gcc: fatal error: no input files
compilation terminated.
```
10. ![WINDOWS](https://shields.fly.dev/badge/-W-blue)![macOS](https://shields.fly.dev/badge/-M-lightgrey)![Linux](https://shields.fly.dev/badge/-L-orange) Repeat same for `g++`.
11. ![WINDOWS](https://shields.fly.dev/badge/-W-blue)![macOS](https://shields.fly.dev/badge/-M-lightgrey)![Linux](https://shields.fly.dev/badge/-L-orange) Close terminal via `ctrl+` ` or just press cross in the right upper corner of the terminal window.
12. ![WINDOWS](https://shields.fly.dev/badge/-W-blue)![macOS](https://shields.fly.dev/badge/-M-lightgrey)![Linux](https://shields.fly.dev/badge/-L-orange) Open folder. It could be done via upper left menu: `File->Open Folder` or via combination `ctrl+K ctrl+O`.

![](../misc/sem01/12-01.png)
![](../misc/sem01/12-02.png)

13. Choose place for all you programs of this semester
  - Do **not** use remote drives, especially `OneDrive` directory

![](../misc/sem01/13-01.png)

14. Create directory for the first lesson. Something like `sem01` or `lesson01`.
  - Do **not** use space ` ` in names of directories and files.
  - Do **not** use special symbols `/|\@!?*&^%#()[]{}:;'"` in names of directories and files.
  - Minus `-` and underscore `_` are fine in names.

![](../misc/sem01/14-01.png)
![](../misc/sem01/14-02.png)

15. Create file for the first program inside directory of the first lesson. Example, `task0.cpp`.

![](../misc/sem01/15-01.png)
![](../misc/sem01/15-02.png)

## My first program

```cpp
#include <iostream>             // "import" of library

int main() {                    // all cpp programs have main function, it is our entry point
  std::cout << "Hello, world!"  // Special function to put (<<) something in console
    << std::endl;               // Special function to set new line
  return 0;                     // return 0 to say "everything is fine"
}
```

## How to compile and run

First step is compilation. Compilation has several stages but for us now it is just run of the following command
```bash
g++ lesson01/task0.cpp
```
**Pay attention**: path to your file might differs with the path above.

After the compilation you will create executable file.
For windows user
```bash
.\a.exe
```
or (for unix users)
```bash
./a.out
```
