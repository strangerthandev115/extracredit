// Title: Test Data Generator by Whit Barrett, Intro to Computer Systems CSCI 3240-001
// Description: This program creates desired test data based on user input. It is made
// to support the benchmarking program for extra credit, and specifically creates csvs.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

// Function to generate a random integer
int getRandomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Function to generate a random float
float getRandomFloat(float min, float max) {
    float range = max - min;
    float div = RAND_MAX / range;
    return min + (rand() / div);
}

// Function to generate a random character
char getRandomChar() {
    return (char)('A' + (rand() % 26));
}

int main()
{
    srand(time(NULL)); // Seed the random generator with the current time

    // Variables to store user input
    int numCSVs, numElements;
    char dataType;

    // Acquire user input
    printf("How many CSV files would you like to generate? ");
    scanf("%d", &numCSVs);

    printf("What data type would you like (I for int, F for float, C for char)? ");
    scanf(" %c", &dataType);
    if (dataType != 'I' && dataType != 'F' && dataType != 'C')
    {
        printf("\nInvalid data type entered.\n");
        return 1;
    }

    printf("Please enter a number 1-5! ");
    scanf("%d", &numElements);
    if (numElements < 1 || numElements > 5)
    {
        printf("\nInvalid number entered.\n");
        return 1;
    }
    else
        numElements = numElements*1000;

    // Begin main loop of making files
    for (int i = 0; i < numCSVs; i++)
    {
        // Create file name
        char filename[100];
        sprintf(filename, "testdata%d.csv", i+1);

        // Open file
        FILE* fp = fopen(filename, "w");

        if ( fp == NULL) 
        {
            printf("\nError opening file %s\n", filename);
            return 1;
        }

        // Add leading count and type for future file reading
        fprintf(fp, "%d,%c,", numElements,dataType);

        // Switch depending on data type wanted in file
        switch (dataType)
        {
            case 'I':
                for (int j = 0; j < numElements; j++)
                {
                    fprintf(fp, "%d,", getRandomInt(1, 100));
                    if ((j+1)%10 == 0)
                        fprintf(fp, "\n");
                }
                break;
            case 'F':
                for (int j = 0; j < numElements; j++)
                {
                    fprintf(fp, "%f,", getRandomFloat(0.0, 1.1));
                    if ((j+1)%10 == 0)
                        fprintf(fp, "\n");
                }
                break;
            case 'C':
                for (int j = 0; j < numElements; j++)
                {
                    fprintf(fp, "%c,", getRandomChar());
                    if ((j+1)%10 == 0)
                        fprintf(fp, "\n");
                }
                break;
            default:
                printf("\nInvalid data type provided.\n");
                return 1;
        }

        fseek(fp, -1, SEEK_END); // Move the file pointer to the last character

        fputc(' ', fp); // Replace final comma with newline

        fclose(fp);

    }
    return 0;
}