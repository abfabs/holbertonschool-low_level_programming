# 📁 File I/O in C

This project demonstrates how to use low-level file input/output operations in C on a Unix-like system (e.g., Ubuntu 14.04 LTS). It covers using system calls such as `open`, `read`, `write`, and `close`.

---

## 🛠️ Skills & Concepts

- File descriptors and their role
- Standard file descriptors: `stdin (0)`, `stdout (1)`, `stderr (2)`
- `open()`, `read()`, `write()`, `close()` system calls
- File permission flags: `O_RDONLY`, `O_WRONLY`, `O_RDWR`, `O_CREAT`, `O_APPEND`, etc.
- Handling file errors and return values
- Using symbolic constants like `STDIN_FILENO`, `STDOUT_FILENO`, etc.
- Reading from one file and writing to another

---

## 📂 File Descriptions

| File | Description |
|------|-------------|
| `0-read_textfile.c` | Reads and prints the content of a text file to `stdout` |
| `1-create_file.c` | Creates a file with given content or truncates it if it exists |
| `2-append_text_to_file.c` | Appends text to the end of a file |
| `3-cp.c` | Copies the content of one file to another (like the `cp` command) |
| `main.h` | Header file with function prototypes |

---

## 📌 System Calls Used

- `open()`: Open or create a file
- `read()`: Read bytes from a file descriptor
- `write()`: Write bytes to a file descriptor
- `close()`: Close a file descriptor
- `perror()` / `dprintf()`: For error handling

---

## 🔐 Common Flags

| Flag | Meaning |
|------|---------|
| `O_RDONLY` | Open for reading only |
| `O_WRONLY` | Open for writing only |
| `O_RDWR` | Open for reading and writing |
| `O_CREAT` | Create file if it doesn’t exist |
| `O_APPEND` | Append to end of file |
| `O_TRUNC` | Truncate file to zero length |

---

## 🧪 How to Compile

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o file_io
