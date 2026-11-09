#pragma once
#include <cstdint>
class PlaybackState
{
public:
bool playing = false;
float x = 0.0f;
float y = 0.0f;
uint64_t transportFrame = 0;

void Play()
{
    playing = true;
}
void Pause()
{
    playing = false;
}
void setPosition(float newX, float newY)
{
    x = newX;
    y = newY;
}
};
