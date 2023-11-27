#include "../include/functions.h"
#include "./src/scripts.c"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

extern SCRIPT_UPDATE_BY_BRANCH;
extern SCRIPT_UPDATE_MAIN;

void gitUpdateBranch(char *branch)
{
    char buffer[BUF_MAX];
    sprintf(buffer, SCRIPT_UPDATE_MAIN, branch);
    system(buffer);
}

void gitUpdate()
{
    system(SCRIPT_UPDATE_MAIN);
}