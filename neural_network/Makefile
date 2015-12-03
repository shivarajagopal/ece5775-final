speech: speech.cpp neuralNetwork.cpp
		g++ -std=c++14 -g -Ofast -o $@ $^

mnist: MNIST.cpp MNISTParser.h neuralNetwork.cpp
	g++ -std=c++14 -g -Ofast -o $@ $^

digitrec: digitrec.cpp neuralNetwork.cpp
	g++ -std=c++14 -g -Ofast -o $@ $^

.PHONY: clean
clean:
	@rm -f digitrec mnist speech *.o

