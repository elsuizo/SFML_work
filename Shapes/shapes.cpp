/* -------------------------------------------------------------------------
@file shapes.cpp

@date 11/19/15 22:58:23
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
    sf::Event event;
    sf::RenderWindow window(sf::VideoMode(300, 300), "Hi");
    //Create a shape 
    // circle
    sf::CircleShape circleShape(50);
    circleShape.setFillColor(sf::Color::Red);
    circleShape.setOutlineColor(sf::Color::Blue);
    circleShape.setOutlineThickness(3);

    // rectangle
    sf::RectangleShape rectShape(sf::Vector2f(50,50));
    rectShape.setFillColor(sf::Color::Green);

    // game loop 
    while(window.isOpen())
    {
        // handle events 
        sf::Event event;
        while(window.pollEvent(event))
        {
           if(event.type == sf::Event::Closed)
               window.close();

        }
        // update the scene
        rectShape.setRotation(30);
        rectShape.move(sf::Vector2f(.11f, 0));
        // render cycle
        window.clear(sf::Color::Black);
        // draw the objects
        window.draw(circleShape);
        window.draw(rectShape);
        window.display();
    }
}
