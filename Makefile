# the compiler: gcc for C program, define as g++ for C++
  CC = gcc
 
  # compiler flags:
  #  -g     - this flag adds debugging information to the executable file
  #  -Wall  - this flag is used to turn on most compiler warnings
  CFLAGS  = -g -Wall
 
  # The build target 
  TARGET = framingham
 
  all: $(TARGET)
 
  $(TARGET): $(TARGET).c
              $(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c
 
  clean:
              $(RM) $(TARGET)
