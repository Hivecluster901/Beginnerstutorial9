#pragma once

class Poo
{
public:
    void Update();
    bool IsColliding(int X, int Y, int Width, int Height);
    int x;
    int y;
    int vx;
    int vy;
    static constexpr int width = 24;// we can change const variable every single time we call the function 
                                    //whilee we cannot change constexpr variable no matter how many times the function is called.
    static constexpr int height = 24;// static members are shared all over with every object; It can be accessed with the expression: Poo::width
    bool isEaten = false;
};