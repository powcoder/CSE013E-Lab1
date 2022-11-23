https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// **** Include libraries here ****
// Standard libraries
#include <stdio.h>
#include <math.h>

//CMPE13 Support Library
#include "BOARD.h"


// User libraries


// **** Set macros and preprocessor directives ****

// **** Define global, module-level, or external variables here ****

// **** Declare function prototypes ****

int main() {
    BOARD_Init();
    {
        //Add code here to print to OLED
        
        
        // You can never return from main() in an embedded system (one that lacks an operating system).
        // This will result in the processor restarting, which is almost certainly not what you want!
        while (1);
    }
}


