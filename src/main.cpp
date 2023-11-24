#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <locale>

using namespace std;
#define CLONEREPO "git clone %s"
#define COMMITREPO "git commit -m \"Commited with beginners script\""
#define ADDREPO "git add --all"
#define PUSHREPO "git push origin main"
#define PULLREPO "git pull"
#define USAGEMSG "Usage : <program> <operation> <repo>"
#define EXIT -1
#define SUCCESS 0

typedef enum op
{
    PULL,
    ADD,
    PUSH,
    CLONE,
    COMMIT
} Operation;

static int op = 0;

void defineOp(char ***argv)
{

    if (NULL == argv ||
        NULL == *argv)
    {
        puts("A operação que você quer fazer não é válida.");
        return;
    }

    if (strcmp(*argv[1], "--operation") == 0)
}
int main(int argc, char **argv)
{
    if (argc != 3)
    {

        return EXIT;
    }
    return SUCCESS;
}