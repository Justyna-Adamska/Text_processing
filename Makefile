reverse: text.o
	cc text.o -o reverse

text.o: text.c
	cc -c text.c
run: reverse text
	./reverse < text

clean: 
	rm text.o reverse
