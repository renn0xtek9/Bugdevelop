# Bugdevelop
A minimal project to illustrate bugs in Kdevelop 
None of those are related to a too old cmake version (current version is 3.11)
## Bug 1 
**loger_Test.cpp:11 destroyInst()** method is not reckognized as part of Loger class 

## Bug 2 
**loger_Test.cpp:20 getInst()** method is not reckognized as part of Loger class 

## Bug 3
Activate the debug message of the cmake plugin in kdedebugsettings and you will see 
```
kdevelop.plugins.cmake: cmake read error. could not read  "/home/max/Projects/Test_projects/Bugdevelop/build/CTestTestfile.cmake"
```
which is logical since this file is in build/Tests/ as expected (and not in build/  !)
if you 
```
mv build/Tests/CTestTestfile.cmake build/CTestTestfile.cmake
```
and close-reopen kdevelop it will be able to read and you will see the test appearing in the unit test pane of Kdevelop (:) )

## Bug 4 
You will also see this (somehow a bad call to cmake)
```
kdevelop.plugins.cmake: Error while parsing: "project" at 3
kdevelop.plugins.cmake: Executing: "cmake" :: ("--help-command-list")
kdevelop.plugins.cmake: Error while parsing: "set" at 7
```


## Note on version 
```
uname -a
Linux zalman 4.13.0-36-generic #40~16.04.1-Ubuntu SMP Fri Feb 16 23:25:58 UTC 2018 x86_64 x86_64 x86_64 GNU/Linux
```
```
plasmashell --version
plasmashell 5.12.2
```
```
kdevelop --version
kdevelop 5.2.1
```







