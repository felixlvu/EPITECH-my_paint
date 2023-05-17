/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_paint_struct.h"
#include "my_paint_fnct.h"

void draw_pencil_ext(sprite_t *sprite, window_t *window)
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

void draw_pencil(sprite_t *sprite, window_t *window)
{
    if (sprite->pencil->scale == 1)
        sfCircleShape_setRadius(sprite->draw->circle, 5);
    if (sprite->pencil->scale == 2)
        sfCircleShape_setRadius(sprite->draw->circle, 20);
    if (sprite->pencil->scale == 3)
        sfCircleShape_setRadius(sprite->draw->circle, 30);
    if (window->pencil == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            draw_pencil_ext(sprite, window);
        sfRenderWindow_drawSprite(window->window, sprite->draw->sprt, NULL);
    }
}

void draw_eraser(sprite_t *sprite, window_t *window)
{
    if (sprite->eraser->scale == 1)
        sfCircleShape_setRadius(sprite->draw->circle, 5);
    if (sprite->eraser->scale == 2)
        sfCircleShape_setRadius(sprite->draw->circle, 20);
    if (sprite->eraser->scale == 3)
        sfCircleShape_setRadius(sprite->draw->circle, 30);
    if (window->eraser == 1) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            draw_eraser_ext(sprite, window);
        sfRenderWindow_drawSprite(window->window, sprite->draw->sprt, NULL);
    }
}

void init_loop(window_t *window)
{
    sprite_t *sprite = malloc(sizeof(sprite_t));

    malloc_struct(sprite);
    init_struct(sprite, window);
    while (sfRenderWindow_isOpen(window->window)) {
        close_window(window);
        sfRenderWindow_clear(window->window, sfBlack);
        files_buttons(window, sprite);
        go_start_screen(window);
        editing_page(window, sprite);
        draw_pencil(sprite, window);
        draw_eraser(sprite, window);
        sfRenderWindow_display(window->window);
    }
    free_destroy(window, sprite);
}

int main(void)
{
    window_t *window = malloc(sizeof(window_t));
    init_window(window);
    init_loop(window);
    return 0;
}
