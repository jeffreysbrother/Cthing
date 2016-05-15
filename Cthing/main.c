#include <stdio.h>
#include <stdlib.h>

//functions declared outside of main() ... if below main(), we must prototype the function (name it before, define it later)
//void means we are not returning anything
void pointlessFunction() {
    printf("this came out of a function, baby!\n");
}

void addition(int f, int g) {
    int combination = f + g;
    printf("the result is %d\n", combination);
}





int main()
{
    //placeholders
    printf("My age is %d, but I have %f dollars on my desk.\n", 32, 100.5);
    printf("My favorite girl is called %s, but I no time to imagine her now.\n", "Angelina");
    
    
    
    //user input
    puts("this is not a pipe"); //not sure what the difference is between printf() and puts()
    puts("this is a line of text"); //it appears that puts() automatically inserts a newline character
    
    
    
    //variables
    int age = 55;
    float pi = 3.1415;
    printf("the man is %d years old\n", age); //can't use puts() if you want to utilize placeholders?
    printf("the value of pi is approximately %f.\n", pi);
    
    int a = 120;
    int b = 100;
    int sum = a + b;
    
    printf("The sum of varibles a and b is %d\n", sum); //variables, addition, placeholders
    
    
    
    //if statements
    if (b > 120)
    {
        printf("Hi. The value within b is greater than a. Please enter your age \n");
        scanf("%d", &age);
        printf("Okay. The value within the age variable is %d\n", age);
    } else {
        printf("Hello! The value within b is less than a. See you later!\n");
    }
    
    
    
    //ternary operator
    int x = 12;
    int y = 14;
    int z;
    
    z = (x > y) ? x : y; //make z the value of the larger variable
    printf("The value of z is %d\n", z);
    
    
    
    //switch statements
    //the "break" keyword prevents the next case from being executed
    int marks = 40;
    
    switch(marks)
    {
        case 90:
        case 89:
        case 88:
        case 87:
        case 86:
        case 85:
            printf("Excellent.\n");
            break;
        case 75:
            printf("Pretty good!\n");
            break;
        case 60:
            printf("Not excellent, bro.\n");
            break;
        case 40:
            printf("Dude, you bonked that shit.\n");
            break;
        default:
            printf("Grade unavailable.\n");
    }
    
    
    
    //while loop
//    int i = 0;
//    while (i <= 10) {
//        printf("The value of i is %d\n", i);
//        i++;
//    }
    
    
    
    //do while loop
    //this executes the code AND THEN checks the condition.
//    int i = 11;
//    do {
//        printf("The value of i is %d\n", i);
//        i++;
//    } while (i <= 10);
    
    
    
    //for loop
    //initialization, condition, increment
    for (int i = 0; i <= 10; i++ ) {
        printf("the value of i is equal to %d\n", i);
    }
    
    pointlessFunction();
    
    addition(500, 99);
    
    
    
    return 0;
}



















