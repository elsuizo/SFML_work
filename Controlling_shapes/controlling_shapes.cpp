/* -------------------------------------------------------------------------
@file controlling_shapes.cpp

@date 11/20/15 00:12:14
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
    // create a window
    sf::RenderWindow window(sf::VideoMode(300, 300), "Controlling Shapes");
    //Create a shape 
    // circle
    sf::CircleShape circ(50);
    circ.setFillColor(sf::Color::Red);
    circ.setOutlineColor(sf::Color::Blue);
    circ.setOutlineThickness(3);

    // rectangle
    sf::RectangleShape rect(sf::Vector2f(50,50));
    rect.setFillColor(sf::Color::Green);
    bool moving{false}; 
    // game loop 
    while(window.isOpen())
    {
        // handle events 
        sf::Event event;
        while(window.pollEvent(event))
        {
            // close 
            if(event.type == sf::Event::Closed)
               window.close();
           
            if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right)
               moving = true ;

            if(event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Right)
               moving = false;


        }
        
        if(moving)
        {
            // move the objects
            rect.move(sf::Vector2f(.5f, 0));
        }
        // update the scene
        rect.setRotation(30);
        // render cycle
        window.clear(sf::Color::Black);
        // draw the objects
        window.draw(circ);
        window.draw(rect);
        window.display();

    }

 return 0;
}


