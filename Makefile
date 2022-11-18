.PHONY: test clean

test:
	gcc -fsyntax-only *.c

clean:
	rm -fr *.out