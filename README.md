# simple_shell
## Our Simple Shell will follow the following template
1.	Read user input
2.	Parse/ Split user input
3.	Execute 
4.	Loop 
### Our entry point to the Simple Shell is going to be our main function which takes in the following:

<li>Argc – number of arguments</li>
<li> Argv – character array of arguments</li>
<li>Envp – character array of environmental variables</li>	
<li>Our main function is going to run all the major functions 1-3 above</li>

### Read user input (shell_read())

<li>Determine whether the shell is in interactive or non –interactive mode using isatty()</li>
<li>Use the getline() function to take in input</li>
<li>Check for errors and edge cases </li>
<li>Free any memory as necessary to prevent memory leaks </li>

### Parse (shell_parse())

<li>Use the strtok() to split the input from the getline() function and get the command from the arguments </li>
<li>Check for errors and edge cases </li>
<li>Free any memory as necessary to prevent memory leaks </li>

### Execute (shell_execute())

<li>	Determine if the command from the strtok function are in-built or files  </li>
<li>	Create a child process to execute the program from and make parent wait for the child process </li> 
<li>	Use the execve function to execute arguments from the strtok function  </li>
<li>	Free any memory as necessary to prevent memory leaks  </li>

### List of allowed functions and system calls
	access (man 2 access) \
	chdir (man 2 chdir)  \
	close (man 2 close)  \
	closedir (man 3 closedir)  \
	execve (man 2 execve)  \
	exit (man 3 exit)  \
	_exit (man 2 _exit) \ 
	fflush (man 3 fflush) \ 
	fork (man 2 fork)  \
	free (man 3 free)  \
	getcwd (man 3 getcwd)\  
	getline (man 3 getline)\  
	getpid (man 2 getpid)  \
	isatty (man 3 isatty)  \
	kill (man 2 kill)  \
	malloc (man 3 malloc)\  
	open (man 2 open)  \
	opendir (man 3 opendir)  \
	perror (man 3 perror)  \
	read (man 2 read)  \
	readdir (man 3 readdir)  \
	signal (man 2 signal)  \
	stat (__xstat) (man 2 stat)  \
	lstat (__lxstat) (man 2 lstat) \ 
	fstat (__fxstat) (man 2 fstat)  \
	strtok (man 3 strtok)  \
	wait (man 2 wait)  \
	waitpid (man 2 waitpid)  \
	wait3 (man 2 wait3)  \
	wait4 (man 2 wait4)  \
	write (man 2 write)  \
