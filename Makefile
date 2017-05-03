# Author Tibor Dudlák xdudla00@stud.fit.vutbr.cz
CXX = gcc
CXXFLAGS = -O3 -g -Wall -Wextra -pedantic -std=c++11

default: server

server: server.o
	$(CXX) server.o -o server

server.o: server.c

clean:
	rm -f server *.o
