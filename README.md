*This project has been created as part of the 42 curriculum by kakamal.*

## Description
Libft is my entry assignment for the 42 curriculum. The core objective is to craft an independent C static library from scratch, re-implementing low-level system functions alongside custom utilities for memory allocation, string operations, and node structures.

Since standard helpers are restricted, building these routines manually gives a direct grasp of memory behavior, pointer arithmetic, and standard mechanics. Everything is bundled into a single static library file (`libft.a`) to be re-used across future 42 programming challenges.

## Instructions

### Compilation
To compile all source files and generate the `libft.a` static library, open your terminal in the project directory and run:

```bash
make
```

### Additional Makefile Rules
* `make clean`: Removes all compiled object files (`.o`)[cite: 4].
* `make fclean`: Cleans out object files as well as the generated `libft.a` library file[cite: 4].
* `make re`: Rebuilds the entire library from scratch (`fclean` followed by `make`)[cite: 4].


### Usage in Other Projects
To link `libft` in your own C programs, include the main header file:

```c
#include "libft.h"
```

And link the library during compilation:
```bash
gcc main.c libft.a
```

## Resources

Here are the external video playlists, tutorials, and articles consulted during the development of this project:

### Makefiles
* [YouTube - Makefile Playlist](https://youtube.com/playlist?list=PLkH1REggdbJpmQKm8Nu-H8R81_-c00fpB&si=2JSfkS_2RfnImAI5)

### Pointers & Memory Management
* [YouTube - Understanding Pointers in C](https://youtu.be/zuegQmMdy8M?si=OdEQyb-gSk2lDWQb)
* [memset Function Guide](https://share.google/135FcmQ5QljNAMTBj)
* [memcpy Function Guide](https://share.google/ys3b2tLWZP0dl3n1R)
* [memmove Function Guide](https://share.google/y5NGvra799CmIpast)

### String Manipulation
* [strlcat Function Guide](https://share.google/0taf4Gvk8PzKcnCK6)
* [ft_split Implementation Guide](https://share.google/d2BXkudMooqnJp73N)

### Data Structures
* [YouTube - Linked Lists in C](https://youtu.be/N6dOwBde7-M?si=huOuN79Ub4-u0QcX)
* System manual pages (`man 3 malloc`, `man 3 memcpy`, etc.)

### AI Assistance
AI was used purely as a learning guide and formatting assistant for this project:
* **Logic Clarifications**: Asked for explanations on complex edge cases, such as handling memory overlap in `memmove` vs `memcpy`, and proper memory cleanup in linked lists[cite: 9, 14, 16].
* **Concept Breakdown**: Clarified pointer-to-pointer usage (`t_list **lst`) in list operations[cite: 14, 15, 17].
* **Documentation Support**: Assisted in organizing and formatting this `README.md` file[cite: 18].

*Note: AI was never used to write functional C code. All functions, Makefile rules, pointer logic, and Norm checks were manually written, tested, and verified by me[cite: 4, 8, 20].*