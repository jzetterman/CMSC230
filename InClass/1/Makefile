# Copy this folder for each assignment. `:make` from Neovim builds it.
CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Wpedantic -g
SANITIZE := -fsanitize=address,undefined

TARGET := program
SRCS := $(wildcard *.cpp)
HDRS := $(wildcard *.h *.hpp)

.PHONY: all run sanitize clean

all: $(TARGET)

$(TARGET): $(SRCS) $(HDRS)
	$(CXX) $(CXXFLAGS) -o $@ $(SRCS)

run: $(TARGET)
	./$(TARGET)

sanitize:
	$(CXX) $(CXXFLAGS) $(SANITIZE) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET) *.o
