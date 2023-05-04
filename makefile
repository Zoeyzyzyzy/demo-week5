CXX = g++
CXXFLAGS = -std=c++11 -Wall
DEPENDENCIES = main.o rectangle.o triangle.o point.o


# main: point.o rectangle.o triangle.o main.o 
# 	g++ -o main point.o rectangle.o triangle.o main.o

# main: point.cpp rectangle.cpp triangle.cpp main.cpp point.h rectangle.h triangle.h  
# 	g++ -o main point.cpp rectangle.cpp triangle.cpp main.cpp

main: $(DEPENDENCIES)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f *.o main
