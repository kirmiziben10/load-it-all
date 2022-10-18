#include <stdio.h>
#include <conio.h>
#include <time.h>
char loadingBar(int, int);

int percentage, barLenght;

int main()
{
    printf("Enter the percentage:");
    scanf("%d", &percentage);
    printf("Enter the bar lenght:");
    scanf("%d", &barLenght);
    for (int i = 0; i < 100; i++)
    {
        loadingBar(i,barLenght);
        delay(100);
    }

    return 0;
};

void delay(int number_of_milliseconds)
{
    // Converting time into milli_seconds
    int milli_seconds = number_of_milliseconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

char loadingBar(int percentage, int barLenght)
{
    char finalString[barLenght+1];

    if (percentage > 100)
    {
        for (int i = 0; i < barLenght / 100; i++)
        {
            finalString[i] = 219;
        }
        printf("%s if trued", finalString);
    }
        char full = 219;
        char threeQuarters = 178;
        char half = 177;
        char oneQuarter = 176;
        int loadedLenght = barLenght * percentage;
        int lastBarPercentage = loadedLenght % 100;

        for (int i = 0; i < barLenght; i++)
        {
            finalString[i] = 0;
        }
        

        for (int i = 0; i < loadedLenght / 100 ; i++)
        {
            finalString[i] = full;
        }

        if (lastBarPercentage > 2 && lastBarPercentage < 25)
        {
            finalString[loadedLenght / 100 ] = oneQuarter;
        }
        else if (lastBarPercentage < 50)
        {
            finalString[loadedLenght / 100 ] = half;
        }
        else if (lastBarPercentage < 75)
        {
            finalString[loadedLenght / 100 ] = threeQuarters;
        }
        printf("%s\r", finalString);
        return finalString;
};