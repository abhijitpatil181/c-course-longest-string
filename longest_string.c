#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int longestStringIndex;
    if (argc <= 1)
    {
        puts("");
    }
    else
    {
        longestStringIndex = 1;
        for (int currentStringIndex = 2; currentStringIndex < argc; currentStringIndex++)
        {
            if (strlen(argv[longestStringIndex]) < strlen(argv[currentStringIndex]))
            {
                longestStringIndex = currentStringIndex;
            }
        }
        puts(argv[longestStringIndex]);
    }
    return EXIT_SUCCESS;
}