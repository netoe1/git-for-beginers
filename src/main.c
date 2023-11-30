#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "functions.h"
#include "consts.h"
#include "cli.h"

#define label argv[2]
#define operation argv[1]

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
            gitUpdate();
            return SUCCESS;
        }
        else if (
            (strcmp(operation, HELP_LONG) == SUCCESS || strcmp(operation, HELP_SHORT) == SUCCESS))
        {
            cli_help();
            return SUCCESS;
        }
        else if ((strcmp(operation, UPDATE_BRANCH_LONG) == SUCCESS || strcmp(operation, UPDATE_BRANCH_SHORT) == SUCCESS) &&
                 (strcmp(operation, label)) == SUCCESS)
        {
            gitUpdateBranch(label); // This function already treat errors.
        }
    }

    puts("ERROR:gitBeginner:\nIt seems that you called the program, but did not inform the CLI function.\
            \nType <program> --help or <program> -h to see available commands.");

    return EXIT;
}
