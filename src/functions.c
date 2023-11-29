#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "functions.h"

const char *SCRIPT_UPDATE_MAIN = "git add --all, git commit -m \"updated with git-for-begginers\" git push origin main";
const char *SCRIPT_UPDATE_SPECIFIC_BRANCH = "git add --all, git commit -m \"updated with git-for-begginers\" git push origin %s";

void gitUpdateBranch(char *branch)
{
    char buffer[BUF_MAX];
    sprintf(buffer, SCRIPT_UPDATE_SPECIFIC_BRANCH, branch);
    system(buffer);
}

void gitUpdate()
{
    system(SCRIPT_UPDATE_MAIN);
}