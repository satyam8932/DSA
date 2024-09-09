section .data
    # Data definitions

section .bss
    # Uninitialized data

section .text
    global _start

_start:
    # Allocate memory for a new TreeNode
    mov rax, 1  # System call for malloc
    mov rdi, 24  # Size of TreeNode (assuming 4 bytes for int, 8 bytes for pointers)
    syscall
    mov rbx, rax  # Store the pointer in rbx

    # Set data field
    mov DWORD PTR [rbx], 10  # Set data to 10

    # Set left and right pointers to NULL
    mov QWORD PTR [rbx + 8], 0
    mov QWORD PTR [rbx + 16], 0

    # ... rest of your code ...

    mov rax, 60  # System call for exit
    xor rdi, rdi  # Exit code (0 for success)
    syscall