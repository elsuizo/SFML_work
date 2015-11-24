/* -------------------------------------------------------------------------
@file game1.cpp

@date 11/21/15 10:18:57
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
// includes
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include<SFML/OpenGL.hpp>
//-------------------------------------------------------------------------
// namespaces
using namespace sf;
using namespace std;
//-------------------------------------------------------------------------
// functions

// function for initialize a shapes
void initShape(RectangleShape& shape, Vector2f const& pos, Color const& color )
{
    shape.setFillColor(color);
    shape.setPosition(pos);
    shape.setOrigin(shape.getSize() * 0.5f); // the center of rectangle
}

//-------------------------------------------------------------------------
// main program

int main()
{
    // create a window
    RenderWindow window(VideoMode(300, 300), "Controlling Shapes");
    window.setFramerateLimit(60);
    // player shape
    Vector2f start_pos = Vector2f(50, 50);
    RectangleShape player_rect(Vector2f(50, 50));
    initShape(player_rect, start_pos, Color::Green);
    // target shape
    RectangleShape target(Vector2f(50, 150));
    initShape(target, Vector2f(200, 50), Color::Blue);
    // enemy shape
    RectangleShape enemy(Vector2f(50, 100));
    initShape(enemy, Vector2f(50, 250), Color::Red);
          
         
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
            // always move right    
            player_rect.move(1,0);
            if(Keyboard::isKeyPressed(Keyboard::Key::Down))
                player_rect.move(0, -1);
        }
        // render frame
        
        // update the scene
        window.clear(Color::Black);
        // draw the objects
        window.draw(player_rect);
        window.draw(enemy);
        window.draw(target);
        window.display();
         
    }

    return 0;
}
//-------------------------------------------------------------------------
// end program   
