all: Hangman

Hangman: Hangman.o LinkedList.o Node.o GameData.o
	g++ -o $@ $^

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f Hangman *.o
