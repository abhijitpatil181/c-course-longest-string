#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int longest_string_index;
    if (argc <= 1)
    {
        puts("");
    }
    else
    {
        longest_string_index = 1;
        for (int current_string_index = 2; current_string_index < argc; current_string_index++)
        {
            if (strlen(argv[longest_string_index]) < strlen(argv[current_string_index]))
            {
                longest_string_index = current_string_index;
            }
        }
        puts(argv[longest_string_index]);
    }
    return EXIT_SUCCESS;
}