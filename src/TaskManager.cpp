#include "TaskManager.h"

void TaskManager::addTask(const Task& task) {
    tasks.push_back(task);
}

void TaskManager::removeTask(int id) {
    tasks.erase(std::remove_if(tasks.begin(), tasks.end(),
        [id](const Task& task) { return task.getId() == id; }), tasks.end());
}

Task* TaskManager::getTask(int id) {
    auto it = std::find_if(tasks.begin(), tasks.end(),
        [id](const Task& task) { return task.getId() == id; });
    return (it != tasks.end()) ? &(*it) : nullptr;
}

std::vector<Task> TaskManager::getAllTasks() const {
    return tasks;
}
