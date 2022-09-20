//You didn't specify that stdlib.h was required for atoi.
#include <stdio.h>
#include <stdlib.h>

//I always use function prototyping...
//It makes my life easier...
void sum(int n, int* answer);


//The main function. It takes in argc (Argument count) and argv** (The actual arguments)
int main(int argc, char** argv){
    //printf("Please enter a number: ");
    //Define n as an int
    int n;
    //scanf("%d", &n);

    //Convert the argument given to an integer.
    if(argc > 1){
        n = atoi(argv[1]);
    } else {
        printf("Please enter a number: ");
        scanf("%d", &n);
    }
    //n = atoi(argv[1]);
    
    //Define Answer
    int answer = 0;
    //Calculate the sum, and store the result to answer
    sum(n,&answer);

    //Print the answer, followed by a newline.
    printf("%d\n", answer);
}

//The sum function. It takes in an int (n) and a pointer to an int (answer)
void sum(int n, int* answer){
    int sum = 0;
    for(int i = 0; i <= (n); i++){
        sum += i;
    }  
    *answer = sum;
}

/**
 * Step 3 Answer:
 *      This still prints 6 because "answer" is being passed by reference.
 *      It is similar to how arrays and other objects can be passed by reference, and not by value.
 *      When a pointer is updated, it will update within the whole program.  
 *  
 *    For my script to compile and run, please use the makefile.
**/