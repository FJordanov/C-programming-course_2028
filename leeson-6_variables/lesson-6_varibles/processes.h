#ifndef PROCESSES_H
#define PROCESSES_H

typedef struct {
    int id;
    char name[31];
} Process;

extern Process processes[5];
extern int processescount;

int createnewprocess(const char *name);
void stopprocess(int id);

#endif
