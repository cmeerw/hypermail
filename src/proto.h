#ifndef __PROTO_H_
#define __PROTO_H_ 1

#include "hypermail.h"

/*
** Date functions - date.c
*/

long convtoyearsecs(char *);
char *getlocaltime(void);
void gettimezone(void);
void getthisyear(void);
char *getdatestr(long);
char *secs_to_iso(time_t);
time_t iso_to_secs(char *);

/*
** domains.c
*/
int valid_root_domain(char *);


/*
** file.c functions
*/

int isfile(char *);
void check1dir(char *);
void checkdir(char *);
char *getfilecontents(char *);
char *add_char(char *, char);
char *add_string(char *, char *);
char *dirpath(char *);

void readconfigs(char *, int);


/*
** hypermail.c functions
*/
void version(void);
void progerr(char *);
void cmderr(char *);
void usage(void);

/*
** lang.c function
*/
char **valid_language(char *);

/*
** lock.c functions
*/
void lock_archive(char *);
void unlock_archive(void);

/*
** mem.c function
*/
void *emalloc(int);

/*
** setup.c functions
*/
#ifdef DEBUG
void dump_config(void);
#endif

/*
** string.c functions
*/
char *PushByte(struct Push *, char);
char *PushString(struct Push *, char *);
char *PushNString(struct Push *, char *, int);

char *strsav(char *);
char *strreplace(char *, char *);
void strcpymax(char *, const char *, int);
char *strcasestr(char *, char *);
char *stripzone(char *);
int numstrchr(char *, char);
char *getvalue(char *);
char *getconfvalue(char *, char *, char *);
char *unre(char *);
char *oneunre(char *);
char *rmcr(char *);
int isquote(char *);
char *replace(char *, char *, char *);
char *replacechar(char *, char, char *);
char *convchars(char *);
char *unconvchars(char *);
char *makemailcommand(char *, char *, char *, char *);
char *parseemail(char *, char *, char *);
char *parseurl(char *);

#ifdef lint
int isspace(int);
int isalpha(int);
int isalnum(int);
int isxdigit(int);
#endif

#endif
