# Travis example for Identifier created by Rafael Garibotti

GCCFLAGS = -g -Wall -Wfatal-errors 
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

clean:
	rm -fr $(ALL) *.o cov* *.dSYM *.gcda *.gcno *.gcov

test: all
	bash test
