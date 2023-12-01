#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

#include "functions.h"
#include "consts.h"
#include "errors.h"

const char *SCRIPT_UPDATE_MAIN = "git add --all, git commit -m \"updated with git-for-begginers\" git push origin main";
const char *SCRIPT_UPDATE_SPECIFIC_BRANCH = "git add --all, git commit -m \"updated with git-for-begginers\" git push origin %s";

static int saveData = 0;
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

int gitConfig_account_userWillSaveDataOrNot()
{
    return saveData;
}

void gitConfigAccount(const char *username, const char *password, const char *operation)
{
    if (username == NULL)
    {
        puts(INVALID_SYNTAX_USERNAME);
        return;
    }

    if (password == NULL)
    {
        puts(INVALID_SYNTAX_PASSWORD);
        return;
    }

    if (operation == NULL)
    {
        puts(INVALID_SYNTAX_OPERATION_NULL);
        return;
    }

    if (strcmp("--global", operation) == SUCCESS && strcmp("-op", operation) == SUCCESS)
    {

        return;
    }
    else if (strcmp("--session", operation) == SUCCESS && strcmp("-s", operation) == SUCCESS)
    {
        return;
    }

    puts(INVALID_SYNTAX_OPERATION_NULL);
}