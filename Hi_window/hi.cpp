/* -------------------------------------------------------------------------
@file hi.cpp

@date 11/19/15 21:13:17
@author Martin Noblia
@email martin.noblia@openmailbox.org

@brief
Example for pop-up window in SFML, this is hello world -1
@detail

Licence:
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
---------------------------------------------------------------------------*/

#include<SFML/Window.hpp>

int main()
{
    sf::Window window(sf::VideoMode(300, 300), "Hi");
    sf::sleep(sf::seconds(3)); // windows live for 3 seconds
    return 0 ;

}

