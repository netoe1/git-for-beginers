#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "functions.h"
#include "scripts.c"
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