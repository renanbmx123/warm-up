# Travis example for Identifier created by Rafael Garibotti

GCCFLAGS = -g -Wall -Wfatal-errors 
sanitizeFlags = -g -Wall -Wfatal-errors -fsanitize=address
ALL = identifierAux
GCC = gcc

all: $(ALL)

identifier: identifierAux.c ../test/TestFoo.c ../Unity/src/unity.c
	$(GCC) $(GCCFLAGS) -o $@ $@.c

cov: identifierAux.c
	$(GCC) $(GCCFLAGS) -fprofile-arcs -ftest-coverage -o $@ identifierAux.c
	./cov
	gcov -b identifierAux.c

check: identifierAux.c
	cppcheck identifierAux.c

valgrind: identifierAux.c
	$(GCC) $(GCCFLAGS) identifierAux.c -o valgrind
	valgrind --leak-check=full --show-leak-kinds=all valgrind

sanitize: identifierAux.c
	$(GCC) $(sanitizeFlags)  identifierAux.c -o sanitize
	./sanitize
 

clean:
	rm -fr $(ALL) *.o cov* *.dSYM *.gcda *.gcno *.gcov

test: all
	bash test
