#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>

// Below states modules used in the program
int main (void) 
{
    // Hello and welcome to the Source Code for Calculator Version 0.1 BETA! 
    // The 2 lines below show the Intro w/ Options for how it works & to go to the Calculator BETA

    printf("Hello, and welcome to Calculator BETA Version 0.1!\n");
    printf("Please press 1, to go to the Calculator, or 2 for more information.\n");
    
    // This float is for the option for 1 or 2 for the Calculator BETA and how it works.

    float Option = get_float("Your Number: ");

    // These 2 floats tell what the computer to do "if" 1 or 2 is pressed.

    if (Option == 1)
    {
        // Gives Introduction
        printf("Hi, and welcome to the Calculator BETA!\n");
        printf("Press a number from 1-4, for Addition, Subtraction, Multiplication, and Divsion, respectedly.\n");

        // Gives you an option from 1-4
        int Numbers = get_int("Your Option: ");

        // "If" statement for addition, and when 1 is pressed.
        if (Numbers == 1)
        {
            // Adresses 3 floats and prints out answer.
            float Addend = get_float("The First Addend: ");
            float AddendTwo = get_float("The Second Addend: ");
            int Answer = Addend + AddendTwo; 
            printf("The answer to your addition problem is %i.\n", Answer);
        }

        // Second "If" statement for Subtraction.
        if (Numbers == 2)
        {
            // Adresses 3 "More" floats and prints out difference.
            float Minuend = get_float("The Minuend: ");
            float Subtrahend = get_float("The Subtrahend: ");
            int SubAnswer = Minuend - Subtrahend;
            printf("The difference of your subtraction problem is %i.\n", SubAnswer);
        }

        // Third "If" statement inside If statement for Multiplication.
        if (Numbers == 3)
        {

            // Adresses 3 MORE floats and prints out the product.
            float Factor = get_float("The First Factor: ");
            float FactorTwo = get_float("The Second Factor: ");
            int MultiAnswer = Factor * FactorTwo;
            printf("The product of your multiplication answer is %i.\n", MultiAnswer);
        }

        // Last "If" statement inside If statement for Division.
        if (Numbers == 4)
        {
            // Adresses 3 last floats and prints out the product.
            float Dividend = get_float("Your Dividend: ");
            float Divisor = get_float("Your Divisor: ");
            int DiviAnswer = Dividend / Divisor;
            printf("The quotient of your division problem is %i.\n", DiviAnswer);
        }
    }
    
    // 2nd full "If" statement for the 2nd option for Information in Calculator BETA Version 0.1.
    if (Option == 2)
    {
        // Gives you information.
        printf("Hello, and welcome to the Info Center for the Calculator BETA!\n");
        printf("You can read here for how the Calculaor works, or press 1 when inputted for Info on the Options for 1-4.\n");
        printf("If you would like to read here, press 0.\n");
        float OptionTri = get_float("Your Number: ");

        if (OptionTri == 0)
        {
            printf("Ok, so...\n");
            printf("How this works is that you have to press on a option from 1 through to 4, consisting of... Addition, Subtraction, Multiplication, and Division.\n");
            printf("Once you are done, and you would like to redo this program, simply use this command.\n");
            printf("Use, ./calculatorv0.1 \n");

        }

        if (OptionTri == 1)
        {
            printf("The Options of the 1-4 method are... \n");
            printf("1. Addition \n");
            printf("2. Subtraction \n");
            printf("3. Multiplication \n");
            printf("And, 4. Division \n");

            printf("Once you are done, and you would like to redo this program, simply use this command.\n");
            printf("Use, ./calculatorv0.1 \n");
        }
    }

    printf("Thank you for using Calculator BETA! \n");
}
