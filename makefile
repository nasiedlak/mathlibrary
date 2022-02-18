# Author: Cooper Nasiedlak
# NETID: nasiedlak
# ID#: 9082213803

CXX = g++
CXXFLAGS = -Wall

demo: demo.o MathLib.o
	$(CXX) $(CXXFLAGS) -o demo demo.o MathLib.o

demo.o: demo.cpp MathLib.h
	$(CXX) $(CXXFLAGS) -c demo.cpp

MathLib.o: MathLib.h

clean:
	-rm MathLib.o
	-rm demo.o
	-rm demo
