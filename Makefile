bin/main: obj/main.o obj/task.o
	gcc obj/main.o obj/task.o -o bin/main

obj/main.o: src/main.c
	gcc -c src/main.c -o obj/main.o

obj/task.o: src/task.c
	gcc -c src/task.c -o obj/task.o

clean:
	rm -f obj/* bin/*
