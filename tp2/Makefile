CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = out
OBJ = main.o complex.o

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

main.o: main.cpp complex.h
	$(CXX) $(CXXFLAGS) -c main.cpp

complex.o: complex.cpp complex.h
	$(CXX) $(CXXFLAGS) -c complex.cpp

clean:
	rm -f *.o *~ $(TARGET)
