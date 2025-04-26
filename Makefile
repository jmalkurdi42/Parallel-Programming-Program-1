CXX = g++
CXXFLAGS = -std=c++11 -Wall -O2


TARGET = hw1
SRC = hw1.cpp


all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET) 1234 5

clean:
	rm -f $(TARGET)
