#ifndef CONSTS_H
#define CONSTS_H

#define USAGE_MESSAGE "Usage : <program> <operation>"
#define EXIT -1
#define SUCCESS 0
#define UPDATE_LONG "--update"
#define UPDATE_SHORT "-up"
#define HELP_LONG "--help"
#define HELP_SHORT "-h"
#define UPDATE_BRANCH_LONG "--update-branch"
#define UPDATE_BRANCH_SHORT "-ub"

//  Environment variables
#define BUF_MAX 256
#define import extern
//  Git Strings!
#define GIT_PULL "git pull"
#define GIT_ADD "git add --all"
#define GIT_COMMIT "git commit -m \"updated with git-for-beginners\""
#define GIT_PUSH "git push"
#define GIT_CONFIG_USERNAME_SESSION "git config user.name \"%s\""
#define GIT_CONFIG_EMAIL_SESSION "git config user.email \"%s\""
#define GIT_CONFIG_USERNAME_GLOBAL "git config --global user.name \"%s\""
#define GIT_CONFIG_EMAIL_GLOBAL "git config --global user.email \"%s\""
#define GIT_CONFIG_ACCOUNT_SESSION "git config user.name \"%s\" \ngit config user.email \"%s\""
#define GIT_CONFIG_ACCOUNT_GLOBAL "git config --global user.name \"%s\"\ngit config --global user.email \"%s\""
#endif