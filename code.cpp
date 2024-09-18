#include <iostream>
#include <vector>
#include <string>

class Task {
public:
    std::string title;
    bool isCompleted;

    Task(const std::string& taskTitle) : title(taskTitle), isCompleted(false) {}
};

class ToDoList {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& taskTitle) {
        tasks.emplace_back(taskTitle);
        std::cout << "Task added: " << taskTitle << std::endl;
    }

    void viewTasks() const {
        if (tasks.empty()) {
            std::cout << "No tasks to display." << std::endl;
        } else {
            for (size_t i = 0; i < tasks.size(); ++i) {
                std::cout << i + 1 << ". " << tasks[i].title 
                          << " [Status: " << (tasks[i].isCompleted ? "Completed" : "Not Completed") << "]" << std::endl;
            }
        }
    }

    void markTaskAsCompleted(int taskIndex) {
        if (taskIndex < 1 || taskIndex > tasks.size()) {
            std::cout << "Invalid task number." << std::endl;
        } else {
            tasks[taskIndex - 1].isCompleted = true;
            std::cout << "Task marked as completed: " << tasks[taskIndex - 1].title << std::endl;
        }
    }

    void removeTask(int taskIndex) {
        if (taskIndex < 1 || taskIndex > tasks.size()) {
            std::cout << "Invalid task number." << std::endl;
        } else {
            std::cout << "Task removed: " << tasks[taskIndex - 1].title << std::endl;
            tasks.erase(tasks.begin() + taskIndex - 1);
        }
    }
};

int main() {
    ToDoList toDoList;
    int choice;
    std::string taskTitle;
    int taskIndex;

    do {
        std::cout << "\nTo-Do List Menu:\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Mark Task as Completed\n";
        std::cout << "4. Remove Task\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter task title: ";
                std::cin.ignore(); // to clear the buffer
                std::getline(std::cin, taskTitle);
                toDoList.addTask(taskTitle);
                break;
            case 2:
                toDoList.viewTasks();
                break;
            case 3:
                std::cout << "Enter task number to mark as completed: ";
                std::cin >> taskIndex;
                toDoList.markTaskAsCompleted(taskIndex);
                break;
            case 4:
                std::cout << "Enter task number to remove: ";
                std::cin >> taskIndex;
                toDoList.removeTask(taskIndex);
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
