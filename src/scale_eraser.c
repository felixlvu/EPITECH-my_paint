/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-felix.schrynemaekers
** File description:
** scale
*/

#include <SFML/Graphics.h>
#include "my_paint_struct.h"
#include "my_paint_fnct.h"

void scale_eraser_1(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >= 108
    && sfMouse_getPositionRenderWindow(window->window).x <= 140
    && sfMouse_getPositionRenderWindow(window->window).y >= 275
    && sfMouse_getPositionRenderWindow(window->window).y <= 325) {
        if (window->eraser == 0)
            window->eraser = 1;
        else
            window->eraser = 0;
        sprite->eraser->scale = 1;
        sprite->eraser->pressed = 0;
    }
}

void scale_eraser_2(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >= 145
    && sfMouse_getPositionRenderWindow(window->window).x <= 190
    && sfMouse_getPositionRenderWindow(window->window).y >= 275
    && sfMouse_getPositionRenderWindow(window->window).y <= 325) {
        if (window->eraser == 0)
            window->eraser = 1;
        else
            window->eraser = 0;
        sprite->eraser->scale = 2;
        sprite->eraser->pressed = 0;
    }
}

void scale_eraser_3(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >= 195
    && sfMouse_getPositionRenderWindow(window->window).x <= 250
    && sfMouse_getPositionRenderWindow(window->window).y >= 275
    && sfMouse_getPositionRenderWindow(window->window).y <= 325) {
        if (window->eraser == 0)
            window->eraser = 1;
        else
            window->eraser = 0;
        sprite->eraser->scale = 3;
        sprite->eraser->pressed = 0;
    }
}

void draw_eraser_ext(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >= 97 &&
    sfMouse_getPositionRenderWindow(window->window).x <= 800 &&
    sfMouse_getPositionRenderWindow(window->window).y >= 60 &&
    sfMouse_getPositionRenderWindow(window->window).y <= 600) {
        sprite->draw->mouse =
        sfMouse_getPositionRenderWindow(window->window);
        sfCircleShape_setPosition(sprite->draw->circle,
        (sfVector2f){sprite->draw->mouse.x, sprite->draw->mouse.y});
        sfRenderWindow_drawSprite
        (window->window, sprite->draw->sprt, NULL);
        sfRenderWindow_drawCircleShape
        (window->window, sprite->draw->circle, NULL);
        if (window->menu != 3) {
            sfTexture_updateFromRenderWindow
            (sprite->draw->text, window->window, 0, 0);
        }
    } else {
        sfRenderWindow_drawSprite
        (window->window, sprite->draw->sprt, NULL);
    }
}
