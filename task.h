#ifndef TASK_H
#define TASK_H

#define MAX_TASK_NAME_LENGTH 100

struct Task {
    int id;
    char name[MAX_TASK_NAME_LENGTH];
};

#endif