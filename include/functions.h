#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define USE_MACROS 0
void gitUpdate();
void gitUpdateBranch(char *branch);

#if USE_MACROS == 1
#define GIT_UPDATE() \
    system("git pull\n git add --all\n git commit -m \"updated with git-for-beginners\"\ngit push origin main")
#define HELP_CLI() \
    printf("\nCorrect usage below:\n\tHELP: <program> --help OR <program> -h \t\tTo show valid commands.\
    \n\tUPDATE: <program> --update OR <program> -up \tTo update your git repository.\
    \n\nPS:Make sure you leave the program binary in the same git repository folder.\n")

#define INVALID_USAGE() \
    puts("ERROR: Type <program> --help or -h, to see valid commands!")
#endif