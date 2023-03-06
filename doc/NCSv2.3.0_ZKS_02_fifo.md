<sup>SDK version: NCS v2.3.0  -  Link to Hands-on solution: https://github.com/ChrisKurz/nRF_Connect_SDK/tree/main/Workspace/NCSv2.3.0/50_fifo</sup>

# Zephyr Kernel Services: Data Passing - FIFO

## Introduction

A FIFO is a kernel object that implements a traditional first in, first out (FIFO) queue, allowing threads and ISRs to add and remove data items of any size.

## Required Hardware/Software for Hands-on
- one nRF52 development kit (e.g. nRF52DK, nRF52833DK, or nRF52840DK)
- install the _nRF Connect SDK_ v2.3.0 and _Visual Studio Code_. The description of the installation can be found [here](https://developer.nordicsemi.com/nRF_Connect_SDK/doc/2.3.0/nrf/getting_started/assistant.html#).

## Hands-on step-by-step description 

### Create a new Project

1) Create a new project based on the Zephyr button example (/zephyr/samples/basic/button)

### Defining a FIFO

2) A FIFO is defined using a variable of type k_fifo. It must then be initialized by calling k_fifo_init(). The following code defines and initializes an empty FIFO.

	<sup>_src/main.c_</sup>   
  
       struct k_fifo my_fifo;

3) And in main loop add:

	<sup>_src/main.c_ => main() function</sup>   

           k_fifo_init(&my_fifo);

4) Define a Data item:

	<sup>_src/main.c_</sup>   

       struct data_item_t{
               void *fifo_reserved;  
               int counter;
       };
       struct data_item_t my_data;

4) In the button_pressed function we write the counter variable to the FIFO:

	<sup>_src/main.c_ => button_pressed() function</sup>   
  
           my_data.counter=my_data.counter+1;
           k_fifo_put(&my_fifo, &my_data);

5) Reading from the FIFO. A data item is removed from a FIFO by calling k_fifo_get(). The following code uses the FIFO to obtain data items from a producer thread, which are then processed in some manner.

   Add following lines in the main entire loop:

	<sup>_src/main.c_ => main() function</sup>   

           struct data_item_t *my_getData;

                   my_getData = k_fifo_get(&my_fifo, K_FOREVER);
                   printk("Counter: %d\n",my_getData->counter);

## Testing

6) Build the project and download to an nRF52 development kit (e.g. nRF52840-DK).

7) Check the output sent via virtual COM port. 

