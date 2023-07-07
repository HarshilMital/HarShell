# HarShell

HarShell is a custom shell created as part of the Operating Systems course (CSE231). It implements various Unix-based commands. The following commands have been implemented in HarShell:

## cd
Change the current directory.

### Options:

- -L: Handle the operand dot-dot logically. Symbolic link components will not be resolved before dot-dot components are processed.
- -P: Handle the operand dot-dot physically. Symbolic link components will be resolved before dot-dot components are processed.


## echo
Print a string or variable to the console.

### Options:

- -n: Removes the end of line character (\n) from input string arguments.
- -h: Provides information about using the echo command.

## pwd
Print the current working directory.

Options:

-L: Instructs pwd to output the $PWD environment variable contents, including symbolic links. If no option is specified, -L is assumed.
-P: Prints the path to the current directory. All components are directory names, and symbolic links are resolved.
## ls
List files and directories in the current directory.

### Options:

- -a: Do not ignore entries starting with a dot (.).
- -m: Fill width with a comma-separated list of entries.
## date
Display the current date and time.

### Options:

- -u: Outputs the time in UTC (Coordinated Universal Time).
## mkdir
Create directories.

### Options:

- -v: Print a message for each created directory.
## rm
Remove files or directories.

## cat
Concatenate and display the contents of files.

These commands provide a range of functionalities for navigating directories, managing files, and displaying information. Use HarShell to enhance your command-line experience.
