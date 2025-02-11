#include "processes.h"
#include <stdio.h>
#include <string.h>

void create_process() {
    char name[31];
    printf("Enter process name: ");
    scanf("%30s", name);
    int id = createnewprocess(name);
    if (id == 0) {
        printf("Maximum number of processes ! Stop a process to create a new one.\n");
    } else {
        printf("Process  ID %d\n", id);
    }
}

void list_processes() {
    if (processescount == 0) {
        printf("No processes running.\n");
        return;
    }
    for (int i = 0; i < processescount; i++) {
        printf("ID: %d, Name: %s\n", processes[i].id, processes[i].name);
    }
}

void stop_process() {
    int id;
    printf("Enter process ID to stop: ");
    scanf("%d", &id);
    stopprocess(id);
}

int main() {
    int choice;
    do {
        printf("\n1. Create process\n2. List processes\n3. Stop process\n4. Exit\n\nChoose an option: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: create_process(); break;
            case 2: list_processes(); break;
            case 3: stop_process(); break;
            case 4: break;
            default: printf("Erorr\n");
        }
    } while (choice != 4);
    return 0;
}
