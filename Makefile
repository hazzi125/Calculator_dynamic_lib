.PHONY: clean

all: build lib default

lib: libmycomplex.so

default: exe

libmycomplex.so: build/add.o build/sub.o build/mul.o build/div.o
	gcc -shared -o libmycomplex.so build/add.o build/sub.o build/mul.o build/div.o

exe: build/main.o build/add.o build/sub.o build/mul.o build/div.o
	gcc -Wall -Werror build/main.o -o exe -L. -l mycomplex -Wl,-rpath,.

build/add.o: src/add.c src/func.h
	gcc -Wall -Werror -fPIC -c src/add.c -o build/add.o

build/sub.o: src/sub.c src/func.h
	gcc -Wall -Werror -fPIC -c src/sub.c -o build/sub.o

build/mul.o: src/mul.c src/func.h
	gcc -Wall -Werror -fPIC -c src/mul.c -o build/mul.o

build/div.o: src/div.c src/func.h
	gcc -Wall -Werror -fPIC -c src/div.c -o build/div.o

build/main.o: src/main.c src/func.h
	gcc -Wall -Werror -c src/main.c -o build/main.o


build:
	mkdir build

clean:
	rm -rf build libmycomplex.so exe
