# nRF Connect SDK

In this repository you will find several step-by-step hands-on descriptions showing how to use the Nordic Semiconductor _nRF Connect SDK_. 

All hands-on exercises are based on _nRF Connect SDK_ v2.3.0. 

Here is a list of available hands-on exercises:

## Getting started

- [Creating a Project from Scratch](doc/NCSv2.3.0_01_ProjectFromScratch.md) - This hands-on demonstrates how to create a project from scratch.

- [User-defined KCONFIG symbols](doc/NCSv2.3.0_03_User-Defined_KCONFIG.md) - KCONFIG allows you to add software modules from Zephyr repository or other repositories. But you can also define own KCONFIG symbols. This hands-on demonstrates how this can be done.

## Zephyr OS Services

- [Adding Zephyr Logging](doc/NCSv2.3.0_02_ZephyrLogging.md) - Here we add Zephyr Logging to our project. This allows us to get debug messages during runtime.

- [Zephyr Logging in modules with multiple files](doc/NCSv2.3.0_02_ZephyrLogging_declare.md) - This hands-on shows how to add Logging to a module that consist of multiple files.

- [Adding Zephyr Shell](doc/NCSv2.3.0_10_ZephyrShell.md) - Here we add Zephyr Shell to our project. This module is a UNIX-like shell.


## Zephyr Kernel Services

### Threads

- [Thread: Creating a Thread](doc/NCSv2.3.0_ZKS_Threads_01.md) - This basic hands-on demonstrates how to create a Thread.

### Data Passing

- [Data Passing: FIFOs](doc/NCSv2.3.0_ZKS_02_fifo.md) - This hands-on demonstrates how Zephyr's FIFO handling is done in its kernel.

### Timing

- [Timing - Timers](doc/NCSv2.3.0_ZKS_Timing_02_Timers.md) - This hands-on demonstrates how Zephyr's Timing Kernel Service can be used (Timer for Function trigger).

### Other

- [Getting Zephyr version from application software](doc/NCSv2.3.0_ZKS_Other_01_version.md) - This example shows how to retrieve the version number of Zephyr in an application software. 

## CMake

- [Defining a folder for which all C files are automatically included into your project ](doc/CMake/CMake_01_DefineSourceFolder.md) - Adding all *.c files from your _src_ folder into your project. 

- [Adding Debug messages in CMakeLists.txt file](doc/CMake/CMake_02_Debugging.md) - Getting some debug messages during build process may help to get a better understanding about what CMake is doing. This course shows how to add debug messages to CMakeLists.txt file.
