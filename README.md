# simple_shell
## Our Simple Shell will follow the following template
1.	Read user input
2.	Parse/ Split user input
3.	Execute 
4.	Loop 
### Our entry point to the Simple Shell is going to be our main function which takes in the following:
•	Argc – number of arguments
•	Argv – character array of arguments
•	Envp – character array of environmental variables
•	Our main function is going to run all the major functions 1-3 above
### Read user input (shell_read())
•	Determine whether the shell is in interactive or non –interactive mode using isatty()
•	Use the getline() function to take in input
•	Check for errors and edge cases
•	Free any memory as necessary to prevent memory leaks
### Parse (shell_parse())
•	Use the strtok() to split the input from the getline() function and get the command from the arguments
•	Check for errors and edge cases
•	Free any memory as necessary to prevent memory leaks
### Execute (shell_execute())
•	Determine if the command from the strtok function are in-built or files
•	Create a child process to execute the program from and make parent wait for the child process
•	Use the execve function to execute arguments from the strtok function
•	Free any memory as necessary to prevent memory leaks
