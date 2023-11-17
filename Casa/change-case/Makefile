# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
#
# @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
# @date Nov 2 2023
# @brief A Makefile
#

CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS = 

all: change_case_main

change_case_main: change_case_main.o 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)


.PHONY: all clean

	$(CXX) $(CXXFLAGS) -c $<


clean:
	rm -rf *.o change_case_main doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;

