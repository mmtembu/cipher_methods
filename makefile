main: main.o SubstitutionCipher.o Vigenere.o
	g++ -o main -std=c++11 -static main.o SubstitutionCipher.o Vigenere.o

main.o: main.cpp
	g++ -c -std=c++11 -static main.cpp

SubstitutionCipher.o: SubstitutionCipher.h SubstitutionCipher.cpp Cipher.h
	g++ -c -std=c++11 -static SubstitutionCipher.cpp

Vigenere.o: Vigenere.h Vigenere.cpp SubstitutionCipher.h
	g++ -c -std=c++11 -static Vigenere.cpp
	
run: main
	./main
	
clean:
	rm *.o main