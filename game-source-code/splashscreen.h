#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#pragma once
#include "raylib-cpp.hpp"

class splashscreen
{
public:
         // Splashscreen constructor 
        splashscreen(const int &screen_width, const int &screen_height);

        void Display();

        // Method to check if the player has pressed Enter
        bool IsEnterPressed() const;
private:
        
    int screenWidth_;
    int screenHeight_;

    float blinkTime;  // Timer for blinking of the text on the screen
    bool showText;
};

#endif