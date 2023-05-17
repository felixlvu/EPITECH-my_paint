/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-felix.schrynemaekers
** File description:
** scale
*/

#include <SFML/Graphics.h>
#include "my_paint_struct.h"
#include "my_paint_fnct.h"

void scale_1(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >= 100
    && sfMouse_getPositionRenderWindow(window->window).x <= 140
    && sfMouse_getPositionRenderWindow(window->window).y >= 195
    && sfMouse_getPositionRenderWindow(window->window).y <= 245) {
        if (window->pencil == 0)
            window->pencil = 1;
        else
            window->pencil = 0;
        sprite->pencil->scale = 1;
        sprite->pencil->zob = 0;
    }
}

void scale_2(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >= 145
    && sfMouse_getPositionRenderWindow(window->window).x <= 185
    && sfMouse_getPositionRenderWindow(window->window).y >= 195
    && sfMouse_getPositionRenderWindow(window->window).y <= 245) {
        if (window->pencil == 0)
            window->pencil = 1;
        else
            window->pencil = 0;
        sprite->pencil->scale = 2;
        sprite->pencil->zob = 0;
    }
}

void scale_3(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >= 200
    && sfMouse_getPositionRenderWindow(window->window).x <= 260
    && sfMouse_getPositionRenderWindow(window->window).y >= 195
    && sfMouse_getPositionRenderWindow(window->window).y <= 245) {
        if (window->pencil == 0)
            window->pencil = 1;
        else
            window->pencil = 0;
        sprite->pencil->scale = 3;
        sprite->pencil->zob = 0;
    }
}
