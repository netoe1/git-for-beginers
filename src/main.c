#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <sys/stat.h>

#define USAGE "Usage : <program> <operation> <repo>"
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
    puts("Type <program> --help or -h, to see valid commands!");
static int op = 0;

int main(int argc, char **argv)
{
    const char *folder;
    folder = "./git";
    struct stat sb;

    if (!(stat(folder, &sb) == 0 && S_ISDIR(sb.st_mode)))
    {
        puts("ERROR: This doesn't is a git repository.");
    }

    if (argc != 3)
    {
        if (argv[1] == NULL)
        {
            return EXIT;
        }
        if (
            (strcmp(argv[1], UPDATE_SHORT) == 0 || strcmp(argv[1], UPDATE_LONG) == 0) && (argv[2] != NULL))
        {
            GIT_UPDATE();
            return SUCCESS;
        }
        else if (
            (strcmp(argv[1], HELP_LONG) == 0 || strcmp(argv[1], HELP_SHORT) == 0) && (argv[2] == NULL))
        {
            HELP_CLI();
            return SUCCESS;
        }
    }
    return SUCCESS;
}