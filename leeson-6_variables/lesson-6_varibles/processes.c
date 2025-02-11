#include "processes.h"
#include <string.h>

Process processes[5];
int processescount = 0;
static int nextid = 1;

static int nextprocessid() {
    return (nextid > 0) ? nextid++ : 0;
}

int createnewprocess(const char *name) {
    if (processescount >= 5) return 0;
    int id = nextprocessid();
    if (id == 0) return 0;
    processes[processescount].id = id;
    strncpy(processes[processescount].name, name, 30);
    processes[processescount].name[30] = '\0';
    processescount++;
    return id;
}

void stopprocess(int id) {
    for (int i = 0; i < processescount; i++) {
        if (processes[i].id == id) {
            for (int j = i; j < processescount - 1; j++) {
                processes[j] = processes[j + 1];
            }
            processescount--;
            return;
        }
    }
}
