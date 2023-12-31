// Title: Benchmark by Whit Barrett, Intro to Computer Systems CSCI 3240-001
// Description: This program reads a csv into a mutlilevel array, and then performs
// a variety of computations on it. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXROW 10
#define RESROW 5

void addRows(void* array, int colTotal, char arrType)
{
    int halfCol = colTotal/2;

        if (arrType == 'I')
        {
            int **intArray = (int**)array;
            int intResults[MAXROW][halfCol];
            for (int i = 0; i < MAXROW; i++)
            {
                for (int j = 0; j < halfCol; j++)
                {
                    intResults[i][j] = intArray[i][j] + intArray[i][j+1];
                }
            }
         }
        else if(arrType == 'F')
        {
            float **floatArray = (float**)array;
            float floatResults[MAXROW][halfCol];
            for (int i = 0; i < MAXROW; i++)
            {
                for (int j = 0; j < halfCol; j++)
                {
                    floatResults[i][j] = floatArray[i][j] + floatArray[i][j+1];
                }
            }
        }
        else if (arrType == 'C')
        {
            char **charArray = (char**)array;
            char charResults[MAXROW][halfCol];
            for (int i = 0; i < MAXROW; i++)
            {
                for (int j = 0; j < halfCol; j++)
                {
                    charResults[i][j] = charArray[i][j] + charArray[i][j+1];
                }
            }
        }
}

void addColumns(void* array, int colTotal, char arrType)
{
        if (arrType == 'I')
        {
                int **intArray = (int**)array;
                int intResults[RESROW][colTotal];
                for (int i = 0; i < colTotal; i++)
                {
                    for (int j = 0; j < RESROW; j++)
                    {
                        intResults[j][i] = intArray[j][i] + intArray[j+1][i];
                    }
                }
         }
        else if(arrType == 'F')
        {
                float **floatArray = (float**)array;
                float floatResults[RESROW][colTotal];
                for (int i = 0; i < colTotal; i++)
                {
                    for (int j = 0; j < RESROW; j++)
                    {
                        floatResults[j][i] = floatArray[j][i] + floatArray[j][i+1];
                    }
                }
         }
        else if (arrType == 'C')
        {
                char **charArray = (char**)array;
                char charResults[RESROW][colTotal];
                for (int i = 0; i < colTotal; i++)
                {
                    for (int j = 0; j < RESROW; j++)
                    {
                        charResults[j][i] = charArray[j][i] + charArray[j+1][i];
                    }
                }
         }
}

void multiplyRows(void* array, int colTotal, char arrType)
{
    int halfCol = colTotal/2;
        if (arrType == 'I')
        {
                int **intArray = (int**)array;
                int intResults[MAXROW][halfCol];
                for (int i = 0; i < MAXROW; i++)
                {
                    for (int j = 0; j < halfCol; j++)
                    {
                        intResults[i][j] = intArray[i][j] * intArray[i][j+1];
                    }
                }
         }
            else if(arrType == 'F')
            {
                float **floatArray = (float**)array;
                float floatResults[MAXROW][halfCol];
                for (int i = 0; i < MAXROW; i++)
                {
                    for (int j = 0; j < halfCol; j++)
                    {
                        floatResults[i][j] = floatArray[i][j] * floatArray[i][j+1];
                    }
                }
         }
            else if (arrType == 'C')
            {
                char **charArray = (char**)array;
                char charResults[MAXROW][halfCol];
                for (int i = 0; i < MAXROW; i++)
                {
                    for (int j = 0; j < halfCol; j++)
                    {
                        charResults[i][j] = charArray[i][j] * charArray[i][j+1];
                    }
                }
         }
}

void multiplyColumns(void* array, int colTotal, char arrType)
{
    int halfCol = colTotal/2;
        if (arrType == 'I')
        {
                int **intArray = (int**)array;
                int intResults[RESROW][colTotal];
                for (int i = 0; i < colTotal; i++)
                {
                    for (int j = 0; j < RESROW; j++)
                    {
                        intResults[j][i] = intArray[j][i] * intArray[j+1][i];
                    }
                }
         }
            else if(arrType == 'F')
            {
                float **floatArray = (float**)array;
                float floatResults[RESROW][colTotal];
                for (int i = 0; i < colTotal; i++)
                {
                    for (int j = 0; j < RESROW; j++)
                    {
                        floatResults[j][i] = floatArray[j][i] * floatArray[j][i+1];
                    }
                }
         }
            else if (arrType == 'C')
            {
                char **charArray = (char**)array;
                char charResults[RESROW][colTotal];
                for (int i = 0; i < colTotal; i++)
                {
                    for (int j = 0; j < RESROW; j++)
                    {
                        charResults[j][i] = charArray[j][i] * charArray[j+1][i];
                    }
                }
         }
}

void subtractRows(void* array, int colTotal, char arrType)
{
    int halfCol = colTotal/2;
        if (arrType == 'I')
        {
                int **intArray = (int**)array;
                int intResults[MAXROW][halfCol];
                for (int i = 0; i < MAXROW; i++)
                {
                    for (int j = 0; j < halfCol; j++)
                    {
                        intResults[i][j] = intArray[i][j] - intArray[i][j+1];
                    }
                }
         }
            else if(arrType == 'F')
            {
                float **floatArray = (float**)array;
                float floatResults[MAXROW][halfCol];
                for (int i = 0; i < MAXROW; i++)
                {
                    for (int j = 0; j < halfCol; j++)
                    {
                        floatResults[i][j] = floatArray[i][j] - floatArray[i][j+1];
                    }
                }
         }
            else if (arrType == 'C')
            {
                char **charArray = (char**)array;
                char charResults[MAXROW][halfCol];
                for (int i = 0; i < MAXROW; i++)
                {
                    for (int j = 0; j < halfCol; j++)
                    {
                        charResults[i][j] = charArray[i][j] - charArray[i][j+1];
                    }
                }
         }
}

void subtractColumns(void* array, int colTotal, char arrType)
{
    int halfCol = colTotal/2;
        if (arrType == 'I')
        {
                int **intArray = (int**)array;
                int intResults[RESROW][colTotal];
                for (int i = 0; i < colTotal; i++)
                {
                    for (int j = 0; j < RESROW; j++)
                    {
                        intResults[j][i] = intArray[j][i] - intArray[j+1][i];
                    }
                }
         }
            else if(arrType == 'F')
            {
                float **floatArray = (float**)array;
                float floatResults[RESROW][colTotal];
                for (int i = 0; i < colTotal; i++)
                {
                    for (int j = 0; j < RESROW; j++)
                    {
                        floatResults[j][i] = floatArray[j][i] - floatArray[j][i+1];
                    }
                }
         }
            else if (arrType == 'C')
            {
                char **charArray = (char**)array;
                char charResults[RESROW][colTotal];
                for (int i = 0; i < colTotal; i++)
                {
                    for (int j = 0; j < RESROW; j++)
                    {
                        charResults[j][i] = charArray[j][i] - charArray[j+1][i];
                    }
                }
         }
}

void divideRows(void* array, int colTotal, char arrType)
{
    int halfCol = colTotal/2;
        if (arrType == 'I')
        {
                int **intArray = (int**)array;
                int intResults[MAXROW][halfCol];
                for (int i = 0; i < MAXROW; i++)
                {
                    for (int j = 0; j < halfCol; j++)
                    {
                        intResults[i][j] = intArray[i][j] / intArray[i][j+1];
                    }
                }
         }
            else if(arrType == 'F')
            {
                float **floatArray = (float**)array;
                float floatResults[MAXROW][halfCol];
                for (int i = 0; i < MAXROW; i++)
                {
                    for (int j = 0; j < halfCol; j++)
                    {
                        floatResults[i][j] = floatArray[i][j] / floatArray[i][j+1];
                    }
                }
         }
            else if (arrType == 'C')
            {
                char **charArray = (char**)array;
                char charResults[MAXROW][halfCol];
                for (int i = 0; i < MAXROW; i++)
                {
                    for (int j = 0; j < halfCol; j++)
                    {
                        charResults[i][j] = charArray[i][j] / charArray[i][j+1];
                    }
                }
         }
}

void divideColumns(void* array, int colTotal, char arrType)
{
    int halfCol = colTotal/2;
        if (arrType == 'I')
        {
                int **intArray = (int**)array;
                int intResults[RESROW][colTotal];
                for (int i = 0; i < colTotal; i++)
                {
                    for (int j = 0; j < RESROW; j++)
                    {
                        intResults[j][i] = intArray[j][i] / intArray[j+1][i];
                    }
                }
         }
            else if(arrType == 'F')
            {
                float **floatArray = (float**)array;
                float floatResults[RESROW][colTotal];
                for (int i = 0; i < colTotal; i++)
                {
                    for (int j = 0; j < RESROW; j++)
                    {
                        floatResults[j][i] = floatArray[j][i] / floatArray[j][i+1];
                    }
                }
         }
            else if (arrType == 'C')
            {
                char **charArray = (char**)array;
                char charResults[RESROW][colTotal];
                for (int i = 0; i < colTotal; i++)
                {
                    for (int j = 0; j < RESROW; j++)
                    {
                        charResults[j][i] = charArray[j][i] / charArray[j+1][i];
                    }
                }
         }
}

int main()
{
    // Get filename
    char filename[100];
    printf("Enter a csv file name: ");
    scanf("%s", filename);

    // Open file
    FILE* fp = fopen(filename, "r");
    if ( fp == NULL) 
    {
        printf("\nError opening file %s\n", filename);
        return 1;
    }

    // Get number of elements and file type in csv
    int numElements, colTotal;
    char dataType;
    fscanf(fp, "%d,%c,", &numElements,&dataType);
    colTotal = numElements/10;

    // Build array and perform calculations depending on data type
        if (dataType == 'I')
        {
            // Create Array
            int *benchmark[MAXROW];
            for (int i = 0; i < MAXROW; i++)
            {
                benchmark[i] = (int *)malloc(colTotal * sizeof(int));
            }
            // Fill Array
            for (int rows = 0; rows < MAXROW; rows++)
            {
                for (int columns = 0; columns < colTotal; columns++)
                    fscanf(fp, "%d,", &benchmark[rows][columns]);
            }
            // Close file
            fclose(fp);
            // Run benchmark functions
            for (int i = 0; i < 25000; i++)
            {
                addRows(benchmark,colTotal,dataType);
                addColumns(benchmark,colTotal,dataType);
                multiplyRows(benchmark,colTotal,dataType);
                multiplyColumns(benchmark,colTotal,dataType);
                subtractRows(benchmark,colTotal,dataType);
                subtractColumns(benchmark,colTotal,dataType);
                divideRows(benchmark,colTotal,dataType);
                divideColumns(benchmark,colTotal,dataType);
            }
        }
        else if (dataType == 'F')
        {
            // Create Array
            float *benchmark[MAXROW];
            for (int i = 0; i < MAXROW; i++)
            {
                benchmark[i] = (float *)malloc(colTotal * sizeof(float));
            }
            // Fill Array
            for (int rows = 0; rows < MAXROW; rows++)
            {
                for (int columns = 0; columns < colTotal; columns++)
                    fscanf(fp, "%f,", &benchmark[rows][columns]);
            }
            // Close file
            fclose(fp);
            // Run benchmark functions
            for (int i = 0; i < 25000; i++)
            {
                addRows(benchmark,colTotal,dataType);
                addColumns(benchmark,colTotal,dataType);
                multiplyRows(benchmark,colTotal,dataType);
                multiplyColumns(benchmark,colTotal,dataType);
                subtractRows(benchmark,colTotal,dataType);
                subtractColumns(benchmark,colTotal,dataType);
                divideRows(benchmark,colTotal,dataType);
                divideColumns(benchmark,colTotal,dataType);
            }
        }
        else if(dataType == 'C')
        {
            // Create Array
            char *benchmark[MAXROW];
            for (int i = 0; i < MAXROW; i++)
            {
                benchmark[i] = (char *)malloc(colTotal * sizeof(char));
            }
            // Fill Array
            for (int rows = 0; rows < MAXROW; rows++)
            {
                for (int columns = 0; columns < colTotal; columns++)
                    fscanf(fp, " %c,", &benchmark[rows][columns]);
            }
            // Close file
            fclose(fp);
            // Run benchmark functions
            for (int i = 0; i < 25000; i++)
            {
                addRows(benchmark,colTotal,dataType);
                addColumns(benchmark,colTotal,dataType);
                multiplyRows(benchmark,colTotal,dataType);
                multiplyColumns(benchmark,colTotal,dataType);
                subtractRows(benchmark,colTotal,dataType);
                subtractColumns(benchmark,colTotal,dataType);
                divideRows(benchmark,colTotal,dataType);
                divideColumns(benchmark,colTotal,dataType);
            }
        }
    return 0;
}