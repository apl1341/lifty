# the compiler: gcc for C program, define as g++ for C++
  CC = g++
 
  # compiler flags:
  #  -g     - this flag adds debugging information to the executable file
  #  -Wall  - this flag is used to turn on most compiler warnings
  CFLAGS  = -ggdb -Wall -Wextra -pthread
 
  # The build target 
  TARGET = server
  SUPERDEPS = ../com/session
  DEPS = serversession
 
  all: $(TARGET)
 
  $(TARGET): $(TARGET).cpp $(DEPS).cpp $(SUPERDEPS).cpp
		  $(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp $(DEPS).cpp $(SUPERDEPS).cpp
 
  clean:
		  $(RM) $(TARGET)
