# Shutdown++ Makefile
COMPILER = g++
STD = c++17
OUTPUT = shutdown++
SRC = src/main.cpp
HEADERS =
all: compile run 

compile:
	$(COMPILER) $(SRC) $(HEADERS) -std=$(STD) -o $(OUTPUT) 

run:
	./$(OUTPUT) -yp test/example.conf
	./$(OUTPUT) -v
	./$(OUTPUT) -h
clean:
	rm  -f $(OUTPUT)