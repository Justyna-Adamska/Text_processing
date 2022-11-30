reverse: text.o
	cc text.o -o reverse 

text.o: text.c
	cc -c text.c -g
run: reverse my_text
	./reverse < my_text

clean: 
	rm text.o reverse
