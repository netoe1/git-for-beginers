#ifndef SCRIPTS_C
#define SCRIPTS_C

const char *SCRIPT_UPDATE_MAIN =
    {"git pull\
\ngit add-- all\
\ngit commit - m \"updated with git-for-beginners\"\
\ngit push origin main "};

const char *SCRIPT_UPDATE_BY_BRANCH = {
    "git pull\
    \n git add --all\
    \n git commit - m \"updated with git-for-beginners\"\
    \ngit push origin %s"};
#endif