#include <zephyr/kernel.h>
#include "ncs_version.h"

int main(void)
{
     printk("Hello World!\n");

     printk("nRF Connect SDK version (NCS_VERSION_MAJOR|NCS_VERSION_MINOR|NCS_PATCHLEVEL): %d\n", NCS_VERSION_NUMBER);
     printk("nRF Connect SDK version major (NCS_VERSION_MAJOR): %i\n", NCS_VERSION_MAJOR);
     printk("nRF Connect SDK version minor (NCS_VERSION_MINOR): %i\n", NCS_VERSION_MINOR);
     printk("nRF Connect SDK version Patchlevel (NCS_PATCHLEVEL): %i\n", NCS_PATCHLEVEL);
     printk("nRF Connect SDK version string (NCS_VERSION_MAJOR.NCS_VERSION_MINOR.NCS_PATCHLEVEL): %s\n", NCS_VERSION_STRING);

     while(1){

     }
     return 1;
}


#define NCSVERSION          
#define NCS_VERSION_NUMBER  0x20500
#define NCS_VERSION_MAJOR   2
#define NCS_VERSION_MINOR   5
#define NCS_PATCHLEVEL      0
#define NCS_VERSION_STRING  "2.5.0"

#define NCS_BUILD_VERSION v2.5.0
#define BANNER_VERSION STRINGIFY(NCS_BUILD_VERSION)