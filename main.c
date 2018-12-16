#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

#if defined(_WIN32) || defined(WIN_32)
#include <conio.h>
#endif

void waitForAnyKeyToContinue(void);

int main(void)
{
    int value;

    puts("Enter a value:");
    scanf("%d", &value);

    printf("Hello world!\n");
    waitForAnyKeyToContinue();
    return EXIT_SUCCESS;
}

void waitForAnyKeyToContinue(void)
{
    printf("Press any key to continue.\n");
    char c;
    flushInput();

#if defined(_WIN32) || defined(WIN_32)
    getch();
#endif
}

void flushInput(void)
{
#if defined(_WIN32) || defined(WIN_32)
    fseek(stdin, 0, SEEK_END);
#elif defined(__unix__) || defined(__unix) || defined(unix)

#endif
}