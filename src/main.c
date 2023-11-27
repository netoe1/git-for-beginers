#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "../include/functions.h"
#include "./include/consts.h"

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
