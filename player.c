#include <stdint.h>
#include "utils.h"

#define sizez(sprite) (sizeof(sprite) / sizeof(sprite[0]))

// the coordinates for the player object.
struct Node playerPixels[] =
	{

		{1, -7}, {2, -7}, {3, -7}, {4, -7}, {5, -7}, {6, -7}, {7, -7}, {8, -7}, {1, -6}, {2, -6}, {3, -6}, {4, -6}, {5, -6}, {6, -6}, {7, -6}, {8, -6}, {1, -5}, {4, -5}, {5, -5}, {8, -5}, {1, -4}, {4, -4}, {5, -4}, {8, -4}, {1, -3}, {2, -3}, {3, -3}, {4, -3}, {5, -3}, {6, -3}, {7, -3}, {8, -3}, {1, -2}, {3, -2}, {4, -2}, {5, -2}, {6, -2}, {8, -2}, {1, -1}, {2, -1}, {7, -1}, {8, -1}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}, {7, 0}, {8, 0}

};

// for the future we plan to give the player different looks based on whats happening in the game
struct Node playerPixelsDashing[] =
	{};

// for the future we plan to give the player different looks based on whats happening in the game
struct Node playerPixelsJumping[] =
	{

};

// for the future we plan to give the player different looks based on whats happening in the game
struct Node playerPixelsInAir[] =
	{

};

// for the future we plan to give the player different looks based on whats happening in the game
struct Node playerPixelsFalling[] =
	{

};

// for the future we plan to give the player different looks based on whats happening in the game
struct Node playerPixelsRecovering[] =
	{

};

// for the future we plan to give the player different looks based on whats happening in the game
struct Node playerPixelsRecovered[] =
	{

};

struct Player playerz =
	{
		isOnFloor, 3, 26, 0, 0, 8, 8, right, {0, 0},

		playerPixels,
		playerPixelsJumping,
		playerPixelsInAir,
		playerPixelsFalling,
		playerPixelsDashing,
		sizez(playerPixels),
		sizez(playerPixelsJumping),
		sizez(playerPixelsInAir),
		sizez(playerPixelsFalling),
		sizez(playerPixelsDashing)
		
	};

struct Player *getPlayer()
{
	return &playerz;
}