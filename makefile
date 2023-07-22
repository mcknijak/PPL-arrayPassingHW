# Set the compiler
CXX = g++

# Set any compile flags
CXXFLAGS = -Wall -Wextra -std=c++14

# Set the target name
TARGET = arrayPassing

# all rule
all: $(TARGET)

# rule for building the final executable
$(TARGET): $(TARGET).o
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).o

# rule for building object files
$(TARGET).o: $(TARGET).cpp
	$(CXX) $(CXXFLAGS) -c $(TARGET).cpp

# clean rule for removing object and executable files
clean:
	rm -f $(TARGET) $(TARGET).o
