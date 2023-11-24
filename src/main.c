#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define USAGE "Usage : <program> <operation>"
#define EXIT -1
#define SUCCESS 0
#define UPDATE_LONG "--update"
#define UPDATE_SHORT "-up"
#define HELP_LONG "--help"
#define HELP_SHORT "-h"

#define GIT_UPDATE() \
    system("git pull\n git add --all\n git commit -m \"updated with git-for-beginners\"\ngit push origin main")

#define HELP_CLI() \
    printf("\nCorrect usage below:\n\tHELP: <program> --help OR <program> -h \t\tTo show valid commands.\
    \n\tUPDATE: <program> --update OR <program> -up \tTo update your git repository.\
    \n\nPS:Make sure you leave the program binary in the same git repository folder.\n")

#define INVALID_USAGE() \
    puts("ERROR: Type <program> --help or -h, to see valid commands!");
static int op = 0;

int main(int argc, char **argv)
{
    if (argc != 1)
    {
        if (argv[1] == NULL)
        {
            return EXIT;
        }
        if (
            (strcmp(argv[1], UPDATE_SHORT) == 0 || strcmp(argv[1], UPDATE_LONG) == 0))
        {
            GIT_UPDATE();
            return SUCCESS;
        }
        else if (
            (strcmp(argv[1], HELP_LONG) == 0 || strcmp(argv[1], HELP_SHORT) == 0))
        {
            HELP_CLI();
            return SUCCESS;
        }
    }

    INVALID_USAGE();
    return EXIT;
}
