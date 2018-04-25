# Makefile for compiling linked list project
# Author: Peter Nguyen

cxx = g++	# use c++ compiler
cxxflags = -Wall -g	# use -Wall -g flags 
rm = /bin/rm -f		# for cleaning files generated during compilation

all: main

# create the object file for list.cpp
list.o: list.hpp list.cpp
	$(cxx) $(cxxflags) -c list.cpp

# create the object file for main file
main.o: list.o main.cpp
	$(cxx) $(cxxflags) -c main.cpp

# create the executable
main: main.o
	$(cxx) $(cxxflags) -o main main.o

# rule for cleaning files generated during compilations
clean:
	$(rm) *.o main
