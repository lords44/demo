#generic make file creation-->dealing with high no of files
SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))
Inverted_search.exe: $(OBJ)
	gcc -o $@ $(OBJ) -Wall
clean:
	rm *.o *.exe
