_This project has been created as part of the 42 curriculum by kthu._

# Libft

## Description

`libft` is a personal C library built from scratch as the first project of the 42
common core. It reimplements a set of standard C library (`libc`) functions under
an `ft_` prefix, and adds a collection of extra utility functions — for string
manipulation, memory management, numeric conversion, and a singly linked list —
that are not part of the standard library but are useful throughout the rest of
the 42 curriculum.

The goal of the project is to understand how these fundamental functions work
internally by writing them from first principles, and to build a reusable toolkit
that gets carried forward (via a `libft` folder and its own Makefile) into future
C projects.

## Instructions

### Compilation

Clone the repository and run:

```bash
make
```

This compiles every `ft_*.c` source file and archives the resulting object files
into `libft.a` at the root of the repository, using `ar`.

Other available Makefile rules:

```bash
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # fclean + a full rebuild
```

Every source file is compiled with `-Wall -Wextra -Werror`.

### Using the library in another project

Copy the `libft` folder (sources + Makefile) into your project, then compile and
link against it:

```bash
cc your_file.c -L./libft -lft -I./libft -o your_program
```

`-L./libft` tells the linker where to find `libft.a`, `-lft` links against it, and
`-I./libft` lets your source file find `libft.h` when you `#include "libft.h"`.

## Library overview

### Part 1 — Libc function reimplementations

Reimplementations of standard `libc` functions with identical prototypes and
behavior, prefixed with `ft_`:

- **Character classification / conversion**: `ft_isalpha`, `ft_isdigit`,
  `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **String length / memory basics**: `ft_strlen`, `ft_memset`, `ft_bzero`,
  `ft_memcpy`, `ft_memmove`
- **String copy / concatenation**: `ft_strlcpy`, `ft_strlcat`
- **Search**: `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_memchr`
- **Comparison**: `ft_strncmp`, `ft_memcmp`
- **Conversion**: `ft_atoi`
- **Allocation**: `ft_calloc`, `ft_strdup`

### Part 2 — Additional functions

Utility functions with no direct `libc` equivalent, several of which allocate
memory and must be freed by the caller:

- `ft_substr` — extract a substring into a newly allocated string
- `ft_strjoin` — concatenate two strings into a newly allocated string
- `ft_strtrim` — trim a given set of characters from both ends of a string
- `ft_split` — split a string into an array of strings on a delimiter character
- `ft_itoa` — convert an integer into a newly allocated string
- `ft_strmapi` — build a new string by applying a function to each character
  (with its index) of the original string
- `ft_striteri` — apply a function to each character of a string in place,
  giving the function access to each character's index
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` — output a
  character, string, string + newline, or integer to a given file descriptor

### Part 3 — Linked list

A singly linked list (`t_list`) and the functions to manipulate it:

- `ft_lstnew` — create a new node
- `ft_lstadd_front` / `ft_lstadd_back` — add a node to the front or back of a list
- `ft_lstsize` — count the nodes in a list
- `ft_lstlast` — return the last node of a list
- `ft_lstdelone` — free a single node and its content
- `ft_lstclear` — free an entire list and its contents
- `ft_lstiter` — apply a function to every node's content
- `ft_lstmap` — build a new list by applying a function to every node's content

## Resources

- [The Linux man pages](https://man7.org/linux/man-pages/) — reference for the
  original `libc` function prototypes and documented behavior
- 42's own `libft` subject PDF, distributed as part of the curriculum
- Testers such as https://github.com/Tripouille/libftTester and https://github.com/wxsonz/ bro42 are used to check the final result of the functions.

### AI usage

Claude (Anthropic) was used as a learning aid throughout this project, in a
tutoring capacity rather than to generate solutions directly:

- Explaining the purpose, prototype, and expected behavior of each function
  before implementation
- Reviewing hand-written code for correctness, walking through traces of edge
  cases (empty strings, boundary indices, unsigned integer underflow/overflow,
  overlapping memory, allocation failure) rather than supplying fixes outright
- Explaining underlying C concepts as they came up: pointers and pointer
  arithmetic, `const` correctness, `void *` casting, `size_t`/unsigned
  arithmetic pitfalls, function pointers, and struct/pointer-to-pointer
  semantics for the linked list
- All function implementations were written by hand; AI assistance was limited
  to explanation, edge-case review, and pointing out bugs for the author to fix.
