#include "../include/functions.h"
#include "./scripts.c"
#include <stdio.h>
#include <stdlib.h>

#define BUF_MAX 512

extern SCRIPT_UPDATE_BY_BRANCH;
extern SCRIPT_UPDATE_MAIN;

void gitUpdateBranch(char *branch)
{
    if (branch == NULL)
    {
        puts("ERROR: Invalid input for branch.");
        return;
    }

    char buffer[BUF_MAX];
    sprintf(buffer, SCRIPT_UPDATE_MAIN, branch);
    system(buffer);
}

void gitUpdate()
{
    system(SCRIPT_UPDATE_MAIN);
}