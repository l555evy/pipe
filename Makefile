gcc=cc

popen1:popen1.o
	cc -o popen1 popen1.o
popen2:popen2.o
	cc -o popen2 popen2.o
popen3:popen3.o
	cc -o popen3 popen3.o

clean:
	rm -rf popen1 popen2 popen3 *.o



