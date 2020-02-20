#include "Poo.h"
#include "Graphics.h"
#include "Game.h"
#include "Dude.h"


void Poo::Update()
{
    x += vx;
    y += vy;
    const int right = x + width;
    if (x < 0)
    {
         x = 0;
         vx = -vx;
    }
    else if (right >= Graphics::ScreenWidth)
    {
        x = (Graphics::ScreenWidth - 1) - width;
        vx = -vx;
    }
    const int bottom = y + height;

    if (y < 0)
    {
        y = 0;
        vy = -vy;
    }
    else if (bottom >= Graphics::ScreenHeight)
    {
        y = (Graphics::ScreenHeight - 1) - height;
        vy = -vy;
    }
}

bool Poo::IsColliding(int X, int Y, int Width, int Height)
{
    const int right0 = X + Width;
    const int bottom0 = Y + Height;
    const int right1 = x + width;
    const int bottom1 = y + height;

    
    if (right0 >= x && X <= right1 && bottom0 >= y && Y <= bottom1)
    {
        isEaten = true;
    }

        return isEaten;
}




