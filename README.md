# Stack-Implementation-in-Cpp

# Aim

To study and implement stack data structure in C++ using arrays, demonstrating fundamental stack operations including push, pop, and stack boundary conditions (overflow/underflow), while understanding the Last-In-First-Out (LIFO) principle and its practical applications.

# Software Used

Compiler: GNU GCC (g++)

IDE: Visual Studio Code

Operating System: Windows/Linux

# Theory

A stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle, where the last element added is the first one to be removed. It's analogous to a stack of plates where you can only add or remove from the top.

Key Stack Operations:

Push:

    Adds an element to the top of the stack
    
    Requires checking for stack overflow condition
    
    Time Complexity: O(1)

Pop:

    Removes and returns the top element from the stack
    
    Requires checking for stack underflow condition
    
    Time Complexity: O(1)

Peek/Top:
    
    Returns the top element without removing it
    
    Time Complexity: O(1)

isEmpty:

    Checks if the stack is empty
    
    Time Complexity: O(1)

isFull:

    Checks if the stack is full
    
    Time Complexity: O(1)

Stack Implementation Methods:

Array-based Implementation:

    Uses a fixed-size array to store stack elements
    
    Requires tracking the top index
    
    Simple but has fixed capacity

Linked List-based Implementation:

    Uses dynamic memory allocation
    
    No fixed capacity limitation
    
    More complex but flexible

Applications of Stack:

Function call management in programming languages

Expression evaluation and syntax parsing

Undo mechanisms in text editors

Backtracking algorithms

Memory management

Browser history navigation

# Algorithm

Array-based Stack Implementation

Algorithm:

    Start the program
    
    Include necessary header: <iostream>
    
    Define constants and global variables:
    
      const int SIZE = 5 (stack capacity)
      
      Stack array arr[SIZE]
      
      Top pointer initialized to -1 (indicating empty stack)
    
    Implement push() function:
    
      Parameters: stack array, top reference, value to push
      
      Check if top == SIZE - 1 (stack overflow condition)
    
        If true: Display "Stack Overflow" and return
        
        If false:
    
          Increment top: top++
          
          Assign value to array position: arr[top] = value
          
          Display "Pushed: [value]"
    
    Implement pop() function:
    
      Parameters: stack array, top reference
      
      Check if top == -1 (stack underflow condition)
        
        If true: Display "Stack Underflow" and return
        
        If false:
    
          Display "Popped: [arr[top]]"
          
          Decrement top: top--
    
    In main() function:
    
      Initialize stack:
    
        int arr[SIZE] (stack storage)
        
        int top = -1 (stack pointer)
        
      Push Phase: Loop from i=1 to 6 (testing overflow):
    
        Call push(arr, top, i * 10) for each iteration
        
        Expected: 5 successful pushes, 1 overflow
    
      Pop Phase: Loop from i=1 to 6 (testing underflow):
    
        Call pop(arr, top) for each iteration
        
        Expected: 5 successful pops, 1 underflow
    
      Display stack contents:
    
        Print "The array is: "
        
        Loop through array indices 0 to SIZE-1
        
        Display each element to show residual data
        
    End the program

Detailed Step-by-Step Execution:

Initialization:

    Stack array created with SIZE = 5
    
    Top pointer set to -1 (empty stack)

Push Operations:

    Push 10: top=0, arr[0]=10
    
    Push 20: top=1, arr[1]=20
    
    Push 30: top=2, arr[2]=30
    
    Push 40: top=3, arr[3]=40
    
    Push 50: top=4, arr[4]=50
    
    Push 60: Stack Overflow (top == SIZE-1)

Pop Operations:

    Pop: Remove 50, top=3
    
    Pop: Remove 40, top=2
    
    Pop: Remove 30, top=1
    
    Pop: Remove 20, top=0
    
    Pop: Remove 10, top=-1
    
    Pop: Stack Underflow (top == -1)

Array Display:

    Shows original values remain in memory despite logical removal

Key Learning Points:

    LIFO Principle: Last element pushed (50) is first element popped
    
    Boundary Conditions: Proper handling of overflow and underflow
    
    Top Pointer Management: Critical for tracking stack state
    
    Memory Persistence: Array retains values even after popping
    
    Error Handling: Graceful handling of edge cases

Time Complexity Analysis:

    Push Operation: O(1)
    
    Pop Operation: O(1)
    
    Space Complexity: O(n) where n is stack size

# Conclusion

This experiment successfully demonstrated the implementation of stack data structure using arrays in C++. Key findings include:

    Efficient Operations: Both push and pop operations execute in constant time O(1), making stacks highly efficient for LIFO-based data management.
    
    Boundary Management: Proper handling of stack overflow (when pushing to full stack) and underflow (when popping from empty stack) is crucial for robust stack implementation.
    
    Memory Management: Array-based implementation provides fast access but has fixed capacity, requiring careful size planning.
    
    LIFO Principle: The experiment clearly demonstrated the Last-In-First-Out behavior where the most recently added element is always the first to be removed.

Practical Understanding: The implementation showed how stacks manage data in real-world scenarios like function calls, expression evaluation, and undo operations.

The array-based stack implementation provides a solid foundation for understanding more complex data structures and serves as a building block for advanced algorithms in computer science.
