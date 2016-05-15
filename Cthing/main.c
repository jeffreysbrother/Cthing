#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//functions declared outside of main() ... if below main(), we must prototype the function (name it before, define it later)
//void means we are not returning anything
void pointlessFunction() {
    printf("this came out of a function, baby!\n");
}

void addition(int f, int g) {
    int combination = f + g;
    printf("the result is %d\n", combination);
}

int Product(int a, int b) {
    return(a * b);
}

int ArraySum(int MyArray[], int size){
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += MyArray[i];
    }
    return sum;
}


struct student {
    int id;
    char name[20];
    int weight;
};





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
    
//    int f, g;
//    printf("PLEASE ENTER TWO NUMBERS TO BE SUMMED\n");
//    printf("number one here: \n");
//    scanf("%d", &f);
//    printf("number two here: \n");
//    scanf("%d", &g);
//    
//    addition(f, g);
    
    
    
    //functions with return values
    //we can then store the value returned into a variable
    int f, g;
    printf("PLEASE ENTER TWO NUMBERS TO BE MULTIPLIED\n");
    printf("number one here: \n");
    scanf("%d", &f);
    printf("number two here: \n");
    scanf("%d", &g);
    
    int prod;
    prod = Product(f, g);
    printf("the product = %d\n", prod);
    
    
    
    //arrays in C
    int stupidFuckingNumbers[4] = {20, 20, 60, 3};
    int arrayValue = stupidFuckingNumbers[2];
    printf("The value of this array at index 2 is %d\n", arrayValue);
    // **not sure how to use string arrays ... tried earlier with no luck**
    
    char charArray[5] = {'a', 'b', 'c', 'd', 'e'};
    printf("%s \n", charArray);
    
    
    
    //arrays with for loops
    for(int i = 0; i < 4; i++) {
        printf("element[%d]=%d \n", i, stupidFuckingNumbers[i]);
    }
    
    
    
    //multidimensional arrays, using two for loops to iterate over the values
    int multiArray[2][3] = {
        {1, 3, 2},
        {5, 6, 9}
    };
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("multiArray[%d][%d] = %d \n", i, j, multiArray[i][j]);
        }
    }
    
    
    
    //passing arrays to functions
    int MyNumberArray[6] = {20,30,60,50,55,30};
    int sum_of_array = ArraySum(MyNumberArray, 6);
    
    printf("Array Sum = %d \n", sum_of_array);
    
    
    
    
    //pointers
    // a variable whose value is the address of another variable: a hexadecimal value
    int val = 30;
    printf("address of val = %x\n", &val);
        //this will return something like: 5fbff7a8
    
    //declaration of a pointer uses an asterisk
    int *pointer_p = &val;
    printf("address of pointer variable = %x \n", pointer_p);
    printf("value of pointer variable = %d \n", *pointer_p);
    
    
    
    //strings
    //a string is a single dimentional array of charaters which is terminated by a null character
    char my_string[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    
    //a string can have a non-definite size
    char my_other_string[] = "HELLO THERE";
    
    char new_string[20];
    char string_one[12] = "butt";
    char string_two[12] = "love";
    printf("%s \n", my_string);
    printf("%s \n", my_other_string);
    
    //can add a string header file to have access to more string functions
    strcpy(new_string, my_other_string);
    strcat(string_one, string_two);
    int length_string1 = strlen(my_string);
    
    printf("strcpy is equal to %s \n", new_string);
    printf("strcat is equal to %s \n", string_one);
    printf("strlen is equal to %d \n", length_string1);
    
    //strcmp() is for string comparison. the string.h file is very important when working with strings.
    
    
    
    //Structures in C
    //a collection of different variables grouped together logically
    //the struct is treated as a data type
    //the structure is defined above main()

    //this is an instace of the student structure
    struct student record1;
    record1.id = 1;
    strcpy(record1.name, "James");
    record1.weight = 145;
    
    printf("id equals %d   name equals %s    weight equals %d \n", record1.id, record1.name, record1.weight);
    
    
    
    return 0;
}



















