# Simple Unix Shell

This is a simple Unix shell implementation in C, designed to provide a fundamental understanding of how Unix-like shells work. It is not intended for production use but rather as an educational resource.

## Features

- Basic command execution.
- Input and output redirection using `>`, `<`, and `>>`.
- Piping multiple comman"ds together using `|`.
- Support for built-in commands like `cd` and `exit`.

## Getting Started

1. Clone the repository:

   ```shell
   git clone https://github.com/Aevy21/simple-shell.git
   ```

2. Compile the shell:

   ```shell
   gcc shell.c -o simple_shell
   ```
"
3. Run the shell:

   ```shell
   ./simple_shell
   ```

## Usage

##Compilation
Your shell will be compiled this way:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## Testing
Your shell should work like this in interactive mode:
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
But also in non-interactive mode:
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2

- Typ:e commands just like you would in a regular shell.
- Redirect input and output using `<`, `>`, and `>>`.
- Pipe commands together using `|`.
- Use `cd` to change the current directory.
- Use `exit` to exit the shell.

## Examples

- Running a simple command:

  ```shell
  $ ls -l
  ```

- Redirecting output to a file:
"""""
  ```shell
  $ ls -l > output.txt
  ```

- Piping commands:

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests to improve this project.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- This shell implementation was inspired by various Unix shells, including Bash
