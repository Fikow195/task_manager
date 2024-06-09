#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include "Task.h"
#include <vector>
#include <algorithm>

class TaskManager {
public:
    void addTask(const Task& task);
    void removeTask(int id);
    Task* getTask(int id);
    std::vector<Task> getAllTasks() const;

private:
    std::vector<Task> tasks;
};

#endif // TASKMANAGER_H
