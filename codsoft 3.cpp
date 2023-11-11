#include <iostream>
#include <vector>

struct Task {
    std::string description;
    bool completed;
};

void displayTasks(const std::vector<Task>& tasks) {
    std::cout << "Tasks:" << std::endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << (tasks[i].completed ? "[X] " : "[ ] ") << tasks[i].description << std::endl;
    }
    std::cout << "---------------------" << std::endl;
}

int main() {
    std::vector<Task> tasks;

    while (true) {
        displayTasks(tasks);

        std::cout << "Choose an option:" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. Mark Task as Completed" << std::endl;
        std::cout << "3. Quit" << std::endl;

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            Task newTask;
            std::cout << "Enter task description: ";
            std::cin.ignore();
            std::getline(std::cin, newTask.description);
            newTask.completed = false;
            tasks.push_back(newTask);
        } else if (choice == 2) {
            displayTasks(tasks);
            if (tasks.empty()) {
                std::cout << "No tasks to mark as completed." << std::endl;
                continue;
            }
            std::cout << "Enter the task number to mark as completed: ";
            int taskNumber;
            std::cin >> taskNumber;
            if (taskNumber > 0 && taskNumber <= tasks.size()) {
                tasks[taskNumber - 1].completed = true;
                std::cout << "Task marked as completed." << std::endl;
            } else {
                std::cout << "Invalid task number." << std::endl;
            }
        } else if (choice == 3) {
            std::cout << "Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
