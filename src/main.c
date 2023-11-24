#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Internal
#define BUF_MAX 512

#define USAGE "Usage : <program> <operation>"
#define EXIT -1
#define SUCCESS 0
#define UPDATE_LONG "--update"
#define UPDATE_SHORT "-up"
#define HELP_LONG "--help"
#define HELP_SHORT "-h"
#define UPDATE_BRANCH_LONG "--update-branch"
#define UPDATE_BRANCH_SHORT "-ub"
#define SCRIPT_UPDATE_STR "git pull\ngit add --all\ngit commit -m \"updated with git-for-beginners\"\ngit push origin main"
#define SCRIPT_UPDATE_BRANCH_STR "git pull\n git add --all\n git commit -m \"updated with git-for-beginners\"\ngit push origin %s"

#define GIT_UPDATE() \
    system("git pull\n git add --all\n git commit -m \"updated with git-for-beginners\"\ngit push origin main")

#define HELP_CLI() \
    printf("\nCorrect usage below:\n\tHELP: <program> --help OR <program> -h \t\tTo show valid commands.\
    \n\tUPDATE: <program> --update OR <program> -up \tTo update your git repository.\
    \n\nPS:Make sure you leave the program binary in the same git repository folder.\n")

#define INVALID_USAGE() \
    puts("ERROR: Type <program> --help or -h, to see valid commands!")

#define label argv[2]
#define operation argv[1]

void gitUpdate();    // Implemented as macro
void helpCli();      // Implemented as macro
void invalidUsage(); // Implemented as macro

void gitUpdateBranch();

int main(int argc, char **argv)
{
    if (argc != 1)
    {
        if (operation == NULL)
        {
            return EXIT;
        }
        if (
            (strcmp(operation, UPDATE_LONG) == SUCCESS || strcmp(operation, UPDATE_SHORT) == SUCCESS))
        {
            GIT_UPDATE();
            return SUCCESS;
        }
        else if (
            (strcmp(operation, HELP_LONG) == SUCCESS || strcmp(operation, HELP_SHORT) == SUCCESS))
        {
            HELP_CLI();
            return SUCCESS;
        }
        else if ((strcmp(operation, UPDATE_BRANCH_LONG) == SUCCESS || strcmp(operation, UPDATE_BRANCH_SHORT) == SUCCESS) &&
                 (strcmp(operation, label)) == SUCCESS)
        {
            gitUpdateBranch(label); // This function already treat errors.
        }
    }

    INVALID_USAGE();
    return EXIT;
}

void gitUpdateBranch(char *branch)
{
    if (branch == NULL)
    {
        puts("ERROR: Invalid input for branch.");
        return;
    }

    char buffer[BUF_MAX];
    sprintf(buffer, SCRIPT_UPDATE_STR, branch);
    system(buffer);
}
