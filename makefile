count: main.o
	g++ main.o -o count

all: build doc

build: count

doc:
	doxygen config

main.o: main.cc
	g++ -c main.cc
