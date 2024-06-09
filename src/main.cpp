#include <iostream>
#include <string>
#include "TaskManager.h"

void showMenu() {
    std::cout << "1. Добавить задачу\n";
    std::cout << "2. Удалить задачу\n";
    std::cout << "3. Показать все задачи\n";
    std::cout << "4. Выход\n";
    std::cout << "Выберите опцию: ";
}

int main() {
    TaskManager taskManager;
    int option = 0;

    while (option != 4) {
        showMenu();
        std::cin >> option;

        if (option == 1) {
            int id;
            std::string title, description, status;

            std::cout << "Введите ID задачи: ";
            std::cin >> id;
            std::cin.ignore();

            std::cout << "Введите заголовок задачи: ";
            std::getline(std::cin, title);

            std::cout << "Введите описание задачи: ";
            std::getline(std::cin, description);

            std::cout << "Введите статус задачи: ";
            std::getline(std::cin, status);

            // Создаем новый объект Task
            Task newTask(id, title, description, status);

            // Добавляем задачу в TaskManager
            taskManager.addTask(newTask);

            std::cout << "Задача успешно добавлена!" << std::endl;
        }
        else if (option == 2) {
            int id;
            std::cout << "Введите ID задачи для удаления: ";
            std::cin >> id;

            // Удаляем задачу из TaskManager
            taskManager.removeTask(id);

            std::cout << "Задача успешно удалена!" << std::endl;
        }
        else if (option == 3) {
            std::cout << "Список всех задач:" << std::endl;

            // Получаем все задачи из TaskManager
            std::vector<Task> allTasks = taskManager.getAllTasks();

            // Выводим на экран информацию о каждой задаче
            for (const Task& task : allTasks) {
                std::cout << "ID: " << task.getId() << std::endl;
                std::cout << "Заголовок: " << task.getTitle() << std::endl;
                std::cout << "Описание: " << task.getDescription() << std::endl;
                std::cout << "Статус: " << task.getStatus() << std::endl;
                std::cout << std::endl;
            }
        }
        else if (option != 4) {
            std::cout << "Неверная опция. Пожалуйста, выберите снова." << std::endl;
        }
    }

    return 0;
}