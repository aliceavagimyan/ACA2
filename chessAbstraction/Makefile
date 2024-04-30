# Define the compiler
CXX = g++

# Define compiler flags
CXXFLAGS = -Wall

# Define the target executable
TARGET = chessAbstraction

# Define source files
SRCS = chessAbstraction.cpp figure.cpp King.cpp pawn.cpp queen.cpp knight.cpp bishop.cpp rook.cpp Players.cpp -o main

# Define object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Rule for linking the target executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Rule for compiling source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<