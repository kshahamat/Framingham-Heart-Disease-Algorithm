# the compiler: gcc for C program, define as g++ for C++
  CC = gcc
 
  # compiler flags:
  #  -g     - this flag adds debugging information to the executable file
  #  -Wall  - this flag is used to turn on most compiler warnings
  CFLAGS  = -g -Wall
 
  # The build target 
  TARGET = main
 
  all: $(TARGET)
 
  $(TARGET): $(TARGET).cpp
              $(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp calculateRisk.cpp clearAllVectors.cpp consoleInput.cpp displayMenu.cpp printAll.cpp uploadFile.cpp
 
  clean:
              $(RM) $(TARGET)
