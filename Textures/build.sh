#!/bin/bash
g++ -std=c++11 -c $1.cpp -I /usr/include
g++ $1.o -o $1 -lsfml-graphics -lsfml-window -lsfml-system
exit 0
