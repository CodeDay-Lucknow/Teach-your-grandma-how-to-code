// NOW we're entering unknown territory 
#include <stdlib.h>
#include <stdio.h>

// Enter OBJECTED ORIENTED PROGRAMMING
// The creators of C wanted to wrap a typical program in a "function"
// (Python does this without telling you, C is just more `obvious`)

// All of C programs are wrapped in functions
// These functions ALWAYS return something or they return "void"

// Let's look at iteratives now
int main(void) {
    printf("Hello, World!\n"); // This is printing "Hello world" one time. 
    
    
    // How do we do this 15 times?
    int i;
    for (i = 0; i < 15; i++) {   // For i which is 0, till i is less than 15, increase i by one
        printf("Hello, World\n"); 
    } 

    // How do I keep checking if the sensors are working until the sensors aren't working?
    #include <time.h>

    srand(time(NULL));   // Initialization, should only be called once.



    int sensorWorking = 1;

    while (sensorWorking == 1) {
        printf("Sensors do be working\n");
        
        int r = rand() % 20;      // Returns a pseudo-random integer between 0 and RAND_MAX.
        if(r == 10){
            sensorWorking = 0;
        }
        
    }

    // How do I get a SPECIFIC answer in my inputs?

     // Create an integer variable that will store the number we get from the user
    int myNum;

    while(1){
        // Ask the user to guess my age
        printf("What is my age: \n");

        // Get and save the number the user types
        scanf("%d", &myNum);
        if(myNum == 18){
            break;
        }else{
            printf("Nope, try again \n");
        }
    }

    return 0;
}