#include "Task.h"
Task::Task(int id, const std::string& title, const std::string& description, const std::string& status)
    : id(id), title(title), description(description), status(status) {}

int Task::getId() const {
    return id;
}

std::string Task::getTitle() const {
    return title;
}

std::string Task::getDescription() const {
    return description;
}

std::string Task::getStatus() const {
    return status;
}

void Task::setTitle(const std::string& title) {
    this->title = title;
}

void Task::setDescription(const std::string& description) {
    this->description = description;
}

void Task::setStatus(const std::string& status) {
    this->status = status;
}
