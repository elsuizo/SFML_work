#!/bin/bash
g++ -c test.cpp -I /usr/include
g++ test.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
exit 0
