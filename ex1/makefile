all:
	gcc lemon.c -o lemon
	./lemon ex1.y
	cat main.c >> ex1.c
	g++ ex1.c -o ex1

clean:
	rm lemon ex1 ex1.c ex1.h ex1.out
