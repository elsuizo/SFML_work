/* -------------------------------------------------------------------------
@file loading_textures.cpp

@date 11/24/15 16:44:18
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
//#include<SFML/OpenGL.hpp>
//-------------------------------------------------------------------------
// namespaces
using namespace sf;
using namespace std;
//-------------------------------------------------------------------------
// functions

//-------------------------------------------------------------------------
// main program

int main()
{
    // create a window
    RenderWindow window(VideoMode(600, 600), "Loading Textures");
    window.setFramerateLimit(60);
    // create a image
    //Image image;
    //image.create(50, 50, Color::Red);
    /* load image and stop if dont work
    if(!image.loadFromFile("/home/elsuizo/images/baboon.jpg"))
        return -1;
    image.flipVertically();
    image.saveToFile("/home/elsuizo/flip.png");
    */
    // load textures
    Texture texture;
    texture.loadFromFile("../Images/OldChicago.png");

    // create a rectangleshape and load a texture
    RectangleShape rect(Vector2f(200, 150));
    rect.setTexture(&texture);
    Event event;
    // game loop 
    while(window.isOpen())
    {
        // render frame
        while(window.pollEvent(event))
        {
           if(event.type == Event::Closed)
               window.close();

        }
        // update the scene
        window.clear(Color::Black);
        // draw the objects
        window.draw(rect);
        window.display();
        //sleep(seconds(3)); 
    }

    return 0 ;        
}

