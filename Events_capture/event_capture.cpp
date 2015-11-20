/* -------------------------------------------------------------------------
@file event_capture.cpp

@date 11/19/15 21:46:39
@author Martin Noblia
@email martin.noblia@openmailbox.org

@brief

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
#include<SFML/Graphics.hpp>

int main()
{
    sf::Event event;
    sf::Window window(sf::VideoMode(300, 300), "Hi");

    // game loop 
    while(window.isOpen())
    {
        while(window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;

                case sf::Event::KeyPressed:
                    // change the title if space is pressed
                    if(event.key.code == sf::Keyboard::Space)
                        window.setTitle("Space Pressed!!!");
                    break;
                case sf::Event::KeyReleased:
                    // change again if space is realesed
                    if(event.key.code == sf::Keyboard::Space)
                        window.setTitle("Space realesed!!!");
                    // close the window if the space key is realesed
                    else if(event.key.code == sf::Keyboard::Escape)
                        window.close();
                    break;
            }
        }
        window.display();
    }
    
    return 0;
}

