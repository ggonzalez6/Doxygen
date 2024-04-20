
CC = g++
CFLAGS = -g -Wall -Wextra # Compile with all errors and warnings

default: employee # This is the name of the executable

employee: main.o Employee.o Officer.o Supervisor.o
	$(CC) $(CFLAGS) -o employee main.o Employee.o Officer.o Supervisor.o
# It compiles these object files into the executable

main.o: main.cpp Employee.h Officer.h Supervisor.h
	$(CC) $(CFLAGS) -c main.cpp
# It compiles main.cpp file into its' own object file

Employee.o: Employee.cpp Employee.h
	$(CC) $(CFLAGS) -c Employee.cpp
# It compiles Employee.cpp file into its' own object file

Officer.o: Officer.cpp Officer.h
	$(CC) $(CFLAGS) -c Officer.cpp
# It compiles Officer.cpp file into its' own object file

Supervisor.o: Supervisor.cpp Supervisor.h
	$(CC) $(CFLAGS) -c Supervisor.cpp
# It compiles SUpervisor.cpp into its' own object file

clean: # This line specifies the target named clean and it is used to clean up the directory
	$(RM) *.o *~
# The RM (remove) line removes any files with a '.o' and '~' extensions and can be executed with the command "make clean"


