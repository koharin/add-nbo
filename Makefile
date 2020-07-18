all: add-nbo

add-nbo: sum.o read_file.o main.o
	g++ -o add-nbo sum.o read_file.o main.o

sum.o: sum.h sum.cpp
	g++ -c -o sum.o sum.cpp

read_file.o: read_file.h read_file.cpp
	g++ -c -o read_file.o read_file.cpp

main.o: sum.h read_file.h main.cpp
	g++ -c -o main.o main.cpp

clean:
	rm -f add-nbo *.o
