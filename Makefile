bin/main: obj/main.o 
	gcc obj/main.o -o bin/main

obj/main.o: src/main.c
	gcc -c src/main.c -o obj/main.o

clean:
	rm -f obj/*.o bin/*
