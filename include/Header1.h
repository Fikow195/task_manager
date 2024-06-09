#ifndef TASK_H
#define TASK_H

#include <string>
#include <iostrream>
using namespace std;
class Task {
public:
    Task(int id, const string& title, const string& description, const string& status);

    int getId() const;
    string getTitle() const;
    string getDescription() const;
    string getStatus() const;

    void setTitle(const string& title);
    void setDescription(const string& description);
    void setStatus(const string& status);

private:
    int id;
    string title;
    string description;
    string status;
};

#endif // TASK_H
