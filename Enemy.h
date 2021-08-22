#pragma once
#include "Texture.h"
#include "math.h"

class Enemy
{
    public:
        Enemy(SDL_Renderer* renderer);
        ~Enemy();
        int update(vec pPos);
        void render(SDL_Rect camera);


        vec ePos, eVel;
        vec xRange, yRange;
        TextureWrapper* eTexture;
        TextureWrapper* e2Texture;
        bool dead;
        int nextShot = 0;
        bool die = false;  
};

