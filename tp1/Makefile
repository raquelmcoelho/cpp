CXX = g++
CXXFLAGS = -W -Wall -pedantic -std=c++11
TARGET = out
OBJ = main.o book.o

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

main.o: main.cpp book.h
	$(CXX) $(CXXFLAGS) -c main.cpp

book.o: book.cpp book.h
	$(CXX) $(CXXFLAGS) -c book.cpp

clean:
	rm -f *.o *~ $(TARGET)
