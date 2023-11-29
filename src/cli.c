#include <stdio.h>
#include <locale.h>
#include "cli.h"

void cli_help()
{
    printf("\nCorrect usage below:\n\tHELP: <program> --help OR <program> -h \t\tTo show valid commands.\
    \n\tUPDATE: <program> --update OR <program> -up \tTo update your git repository.\
    \n\nPS:Make sure you leave the program binary in the same git repository folder.\n");
}