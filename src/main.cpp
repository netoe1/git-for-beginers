#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <locale>

using namespace std;
#define CLONE "git clone %s"
#define COMMIT "git commit -m \"Commited with beginners script\""
#define ADD "git add --all"
#define PUSH "git push origin main"
#define PULL "git pull"
#define USAGE "Usage : <program> <operation> <repo>"
#define EXIT -1
#define SUCCESS 0

#define UPDATE_LONG "--update"
#define UPDATE_SHORT "-up"
#define HELP_LONG "--help"
#define HELP_SHORT "-h"

/*
    OPERATIONS:
    update -> PULL,ADD, COMMIT, PUSH
    help -> help
*/

typedef enum CLI_OP
{
    UPDATE,
    HELP
};

typedef struct map
{
    int cod;
    char *flag;
} Map;

static int op = 0;

const Map flags[] = {
    {UPDATE, "--update"}};

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        if ()
            return EXIT;
    }
    return SUCCESS;
}