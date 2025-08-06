# _printf

A custom implementation of the C standard library `printf` function. This project was completed as part of the ALX Software Engineering curriculum.

## Description

This `_printf` function handles output conversion specifiers similar to the C `printf`. It uses variadic functions and manual parsing of the format string to handle various data types and formats.

### Supported Specifiers

- Standard: `%c`, `%s`, `%d`, `%i`, `%u`, `%o`, `%x`, `%X`, `%p`, `%%`
- Custom: `%b` (binary), `%S` (non-printable characters), `%r` (reverse), `%R` (ROT13)
- Flags, width, and precision: Partial support for `+`, space, `#`, `0`, `-`, width, and precision
- Length modifiers: `l`, `h`

## Requirements

- Ubuntu 20.04 LTS
- `gcc` compiler with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No global variables
- Max 5 functions per file
- Betty code style compliance

## File Structure

- `main.h`: Header file with function prototypes
- `*.c`: Source files containing core logic

## Compilation

To compile all source files:

```bash
gcc  *.c -o printf
