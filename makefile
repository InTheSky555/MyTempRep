all:
	g++ -g -Wall 1-2-2.cpp -o 1-2-2
clean:
	rm *.o 1-2-2 *~
run: 
	./1-2-2
dbg:
	gdb ./1-2-2
mdf:
	vi 1-2-2.cpp
