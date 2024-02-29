# !!! WORK IN PROGRESS !!!


<sup>SDK version: NCS v2.5.2  -  Link to Hands-on solution: </sup>

# Creating a Custom Board Definition from Scratch

## Introduction

There are hundreds of predefined boards available in the Zephyr project, and therefore also in nRF Connect SDK. 

In general, it is possible to set up your own projects that use your own PCBs on the basis of the predefined boards. In this case, the settings of the development kit boards are overwritten via an overlay file. 

Another possibility is to set up your own board in your own definition. This avoids the overhead that would be caused by the development kit board and the own board definition would be clearer and easier to read. 

In this hands-on, we define a very simple board that essentially consists of just one connected LED. This file could then of course be extended with further definitions.

## Required Hardware/Software
- Development kit [nRF52840DK](https://www.nordicsemi.com/Products/Development-hardware/nRF52840-DK), [nRF52833DK](https://www.nordicsemi.com/Products/Development-hardware/nRF52833-DK), or [nRF52DK](https://www.nordicsemi.com/Products/Development-hardware/nrf52-dk), (nRF54L15DK)
- Micro USB Cable (Note that the cable is not included in the previous mentioned development kits.)
- install the _nRF Connect SDK_ v2.5.2 and _Visual Studio Code_. The installation process is described [here](https://academy.nordicsemi.com/courses/nrf-connect-sdk-fundamentals/lessons/lesson-1-nrf-connect-sdk-introduction/topic/exercise-1-1/).

## Hands-on step-by-step description 

### Create the own Board Definition

1) In general, the SDK directory should not be changed during project development. It should be known that the predefined boards can be found in the directories _SDK directory_/zephyr/boards and _SDK directory_/nrf/boards. We will store our own board outside the SDK directory, for example in the directory __C:/Nordic/MyBoards__.

   Create the new directory __C:/Nordic/MyBoards__. 
2) The _nRF Connect_ extension within _Visual Studio Code_ also offers a Board Wizard that helps with defining new Boards. Let's use this wizard.

   Click on __Create a new board__.
   ![missing image](images/CreateNewBoard.jpg)
3)  Within Visual Studio Code you will see that the __Create New Board__ Wizards will guide you through 5 steps:
    - "Enter a human-readable name for your board." - Enter here for example __My Test Board__.

      ![missing image](images/NewBoard-1.jpg)
    - Then a __board ID__ is needed. The wizard will generated automatically an ID based on the previous entry. Nevertheless, you could also define a own ID. Let's use the automatically generated board ID.

      ![missing image](images/NewBoard-2.jpg)
    - In the next step we select the SoC which is used on our board. Here it is important to select the exact SoC number (nRF52840, nRF52832, ...) as well as its variant (QIAA, CIAA, ...).

      ![missing image](images/NewBoard-3.jpg)
    - Now input the path in which the new board should be created. Here we select the directory we created in step 1: __C:/Nordic/MyBoards__.

      ![missing image](images/NewBoard-4.jpg)
    - "Enter the name of the company that made this board." - The DeviceTree requires for its _compatible_ property a vendor name (or company name). The name we enter will be used. So use your own company name here. 

      ![missing image](images/NewBoard-5.jpg)
4) If the previous board wizard steps have been done, then the following files should be present in our __C:/Nordic/MyBoards__ directory.

   ![missing image](images/NewBoard-directory.jpg)


### Make custom board directory accessible in Visual Studio Code


5) 






   
    
