#Bugdevelop
A minimal project to illustrate bugs in Kdevelop
##Bug 1
loger_Test.cpp:11 destroyInst() method is not reckognized as part of Loger class 

##Bug 2 
loger_Test.cpp:20 getInst() method is not reckognized as part of Loger class 

##Bug 3
Activate the debug message of the cmake plugin in kdedebugsettings and you will see 

kdevelop.plugins.cmake: cmake read error. could not read  "/home/max/Projects/Test_projects/Bugdevelop/build/CTestTestfile.cmake"

which is logical since this file is in build/Tests/ as expected (and not in build/  !)
if you mv build/Tests/CTestTestfile.cmake build/CTestTestfile.cmake and close-reopen kdevelop it will be able to read and you will see the test appearing in the unit test pane of Kdevelop (:) )

##Bug 4 
You will also see this (somehow a bad call to cmake)

kdevelop.plugins.cmakebuilder: Added builder  MakeBuilder for "Makefile"
CMake Error: cmake version 3.5.1
Usage: /usr/bin/cmake -E <command> [arguments...]
Available commands: 
  chdir dir cmd [args...]   - run command in a given directory
  compare_files file1 file2 - check if file1 is same as file2
  copy <file>... destination  - copy files to destination (either file or directory)
  copy_directory <dir>... destination   - copy content of <dir>... directories to 'destination' directory
  copy_if_different <file>... destination  - copy files if it has changed
  echo [<string>...]        - displays arguments as text
  echo_append [<string>...] - displays arguments as text but no new line
  env [--unset=NAME]... [NAME=VALUE]... COMMAND [ARG]...
                            - run command in a modified environment
  environment               - display the current environment
  make_directory <dir>...   - create parent and <dir> directories
  md5sum <file>...          - compute md5sum of files
  remove [-f] <file>...     - remove the file(s), use -f to force it
  remove_directory dir      - remove a directory and its contents
  rename oldname newname    - rename a file or directory (on one volume)
  tar [cxt][vf][zjJ] file.tar [file/dir1 file/dir2 ...]
                            - create or extract a tar or zip archive
  sleep <number>...         - sleep for given number of seconds
  time command [args...]    - run command and return elapsed time
  touch file                - touch a file.
  touch_nocreate file       - touch a file but do not create it.
Available on UNIX only:
  create_symlink old new    - create a symbolic link new -> old

qrc:///qml/storage.js:24: TypeError: Cannot call method 'openDatabaseSync' of undefined
kdevelop.plugins.cmake: cmake server finished with code 1

##Bug 5



