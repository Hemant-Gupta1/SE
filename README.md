# C++ To-Do List Application

## Overview
This is a simple command-line To-Do List application built in C++. The application allows users to manage a list of tasks by adding new tasks, viewing existing tasks, marking tasks as completed, and removing tasks. Each task has a title and a status indicating whether the task is completed or not.

## List of Features

1. **Add Task**: 
   - Allows users to add a new task by providing a brief description (title) of the task.
   
2. **View Tasks**:
   - Displays all the tasks in the list along with their status (Completed or Not Completed).
   
3. **Mark Task as Completed**:
   - Users can mark a task as completed by selecting its task number.
   
4. **Remove Task**:
   - Users can remove a task from the list based on its task number.

5. **Interactive Menu**:
   - A simple menu allows users to interact with the application through basic choices like Add, View, Mark as Completed, and Remove tasks.

## Non-Functional Requirements (NFRs)

1. **Usability**:
   - The application is designed to be easy to use, with a straightforward command-line interface.
   - Users can interact with the program using numbers to select options from the menu, ensuring simplicity.
   
2. **Efficiency**:
   - Efficient handling of tasks using the C++ `vector` data structure to allow dynamic resizing when tasks are added or removed.
   
3. **Performance**:
   - The operations (add, view, mark as completed, and remove) are designed to run in constant or linear time, ensuring quick response even with larger task lists.
   
4. **Reliability**:
   - Input validation ensures that incorrect or out-of-range task numbers do not crash the application.
   - A looped menu system prevents accidental termination of the program, offering multiple chances for interaction.

5. **Portability**:
   - The code is designed to be portable and can be compiled on any platform that supports C++ (Windows, Linux, macOS).

## Design Decisions

1. **Task Class**:
   - A `Task` class was created to encapsulate task details (`title` and `isCompleted`). This ensures separation of concerns, where each task object is responsible for managing its state (title and status).
   
2. **ToDoList Class**:
   - The `ToDoList` class is responsible for managing a collection of tasks. This design adheres to the Single Responsibility Principle (SRP), where the task list management (add, view, update, delete) is delegated to this class.
   
3. **Use of `std::vector`**:
   - The `vector` data structure was chosen for its dynamic sizing capabilities, which allow efficient addition and removal of tasks. It also provides constant-time access for marking and removing tasks by index.
   
4. **Menu-Driven UI**:
   - The program uses a simple, text-based, looped menu system to allow repeated interactions until the user chooses to exit. This ensures user flexibility and uninterrupted task management.

5. **Input Validation**:
   - User inputs (e.g., task numbers) are validated to ensure valid operations, preventing out-of-range errors when marking or removing tasks.


## Potential Improvements

1. **Persistent Storage**:
   - Future versions could include file I/O to save the task list to a file, ensuring tasks are not lost after the program exits.

2. **Task Due Dates**:
   - Introduce an optional due date for tasks, allowing users to prioritize tasks based on deadlines.

3. **Sorting**:
   - Allow users to sort tasks based on title, completion status, or due date.

4. **Graphical User Interface (GUI)**:
   - A GUI could be added to improve user interaction and make the application more accessible to non-technical users.

## Authors
1. Hemant Gupta (IMT2022030)
2. Rishi Patel (IMT2022041)

