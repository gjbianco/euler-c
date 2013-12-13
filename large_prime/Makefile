name = large_prime

$(name) : $(name).c
	gcc -o $(name) -Wall -std=c99 $(name).c

debug : $(name).c
	gcc -o $(name) -Wall -std=c99 $(name).c -g -DDEBUG=1

clean : $(name)
	rm ./$(name)
