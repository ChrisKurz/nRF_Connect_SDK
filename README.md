# nRF Connect SDK

In this repository you will find several step-by-step hands-on descriptions showing how to use the Nordic Semiconductor _nRF Connect SDK_. 

All hands-on exercises are based on _nRF Connect SDK_ v2.4.0. (There are also hands-on based on older versions. Check the NCS version numbers, which are mentioned in the appropriate file and folder names.)

Here is a list of available hands-on exercises:

## Getting started

- [Creating a Project from Scratch](doc/NCSv2.5.0_01_ProjectFromScratch.md) - This hands-on demonstrates how to create a project from scratch.

- [User-defined KCONFIG symbols](doc/NCSv2.5.0_03_User-Defined_KCONFIG.md) - KCONFIG allows you to add software modules from Zephyr repository or other repositories. But you can also define own KCONFIG symbols. This hands-on demonstrates how this can be done

- [Generating a License Report](doc/NCSv2.3.0_LicenseReport.md) - _nRF Connect SDK_ provides the _Software Bill of Materials_ tool that allows to create license report for your own project. This hands-on shows how to use the tool.


## Zephyr OS Services

### Logging

- [Adding Zephyr Logging](doc/NCSv2.5.0_02_ZephyrLogging.md) - Here we add Zephyr Logging to our project. This allows us to get debug messages during runtime.

- [Zephyr Logging in modules with multiple files](doc/NCSv2.5.0_02_ZephyrLogging_declare.md) - This hands-on shows how to add Logging to a module that consist of multiple files.

- [Zephyr Logging with minimal Memory Footprint](doc/NCSv2.4.0_02_ZephyrLogging_minimal.md) - This hands-on shows how to optimize memory footprint of Zephyr Logging.

### Shell

- [Adding Zephyr Shell](doc/NCSv2.4.0_10_ZephyrShell.md) - Here we add Zephyr Shell to our project. This module is a UNIX-like shell.


## Zephyr Kernel Services

### Threads

- [Thread: Creating a Thread](doc/NCSv2.3.0_ZKS_Threads_01.md) - This basic hands-on demonstrates how to create a Thread.

### Data Passing

- [Data Passing: FIFOs](doc/NCSv2.4.0_ZKS_02_fifo.md) - This hands-on demonstrates how Zephyr's FIFO handling is done in its kernel.

### Timing

- [Timing - Timers](doc/NCSv2.3.0_ZKS_Timing_02_Timers.md) - This hands-on demonstrates how Zephyr's Timing Kernel Service can be used (Timer for Function trigger).

### Other

#### Version

- [Getting Zephyr version from application software](doc/NCSv2.4.0_ZKS_Other_01_version.md) - This example shows how to retrieve the version number of Zephyr in an application software. 

- [_nRF Connect SDK_ version](doc/NCSv2.5.0_NCS_Version.md) - The application software can also read out the _nRF Connect SDK_ version. This example shows how. 

- [Application Firmware Version](doc/NCSv2.5.0_App_Version.md) - Zephyr includes since _nRF Connect SDK v2.5.0_ an application version management. This example shows how to use it.


## Zephyr Device Drivers

### Sensor Device Drivers

- [BME280](doc/NCSv2.3.0_ZDD_Sensors_BME280_nRF52840.md) - using an nRF52840DK

- [BME280](doc/NCSv2.3.0_ZKS_Threads_BME280.md) - handling sensor in an own Thread


## CMake

- [Defining a folder for which all C files are automatically included into your project ](doc/CMake/CMake_01_DefineSourceFolder.md) - Adding all *.c files from your _src_ folder into your project. 

- [Adding Debug messages in CMakeLists.txt file](doc/CMake/CMake_02_Debugging.md) - Getting some debug messages during build process may help to get a better understanding about what CMake is doing. This course shows how to add debug messages to CMakeLists.txt file.
