
all: sample
	g++ -Wall -std=c++0x sample.cc -o sample

clear:
	rm -rf sample
