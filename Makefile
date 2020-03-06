
output: main.o ag.o
	g++ main.o ag.o -o output

main.o: main.cpp
	g++ -c main.cpp

ag.o: ag.cpp ag.h
	g++ -c ag.cpp

clean:
	rm *.o output
