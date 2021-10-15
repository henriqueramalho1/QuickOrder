all: compile link

compile:
	g++ -I source/include -c main.cpp source

link:
	g++ main.o -o QuickOrder -L source/lib -l sfml-graphics -l sfml-window -l sfml-system