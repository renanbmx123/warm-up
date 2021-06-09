# Travis example for Identifier created by Rafael Garibotti

GCCFLAGS = -g -Wall -Wfatal-errors 
ALL = identifier
GCC = gcc

all: $(ALL)

identifier: identifier.c ../test/TestFoo.c ../Unity/src/unity.c
	$(GCC) $(GCCFLAGS) -o $@ $@.c

cov: identifierAux.c
	$(GCC) $(GCCFLAGS) -fprofile-arcs -ftest-coverage -o $@ identifierAux.c
	./cov
	gcov -b identifierAux.c

clean:
	rm -fr $(ALL) *.o cov* *.dSYM *.gcda *.gcno *.gcov

test: all
	bash test
