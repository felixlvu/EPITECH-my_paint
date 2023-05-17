/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** editing_button
*/

#include <SFML/Graphics.h>
#include "my_paint_struct.h"
#include "my_paint_fnct.h"

void pencil_texture(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >=
    (int)(window->size.x * 0 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).x <=
    (int)(window->size.x * 80 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).y >=
    (int)(window->size.y * 190 / 600) &&
    sfMouse_getPositionRenderWindow(window->window).y <=
    (int)(window->size.y * 250 / 600)) {
        sfSprite_setTexture
        (sprite->pencil->sprt, sprite->pencil->text_m, sfTrue);
        sfCircleShape_setFillColor(sprite->draw->circle, sfBlack);
        allow_pencil(window, sprite);
    } else {
        sfSprite_setTexture(sprite->pencil->sprt, sprite->pencil->text, sfTrue);
    }
}

void eraser_texture(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >=
    (int)(window->size.x * 0 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).x <=
    (int)(window->size.x * 80 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).y >=
    (int)(window->size.y * 270 / 600) &&
    sfMouse_getPositionRenderWindow(window->window).y <=
    (int)(window->size.y * 330 / 600)) {
        sfSprite_setTexture
        (sprite->eraser->sprt, sprite->eraser->text_m, sfTrue);
        sfCircleShape_setFillColor(sprite->draw->circle, sfWhite);
        allow_eraser(window, sprite);
    } else {
        sfSprite_setTexture(sprite->eraser->sprt, sprite->eraser->text, sfTrue);
    }
}

void save_texture(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >=
    (int)(window->size.x * 0 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).x <=
    (int)(window->size.x * 80 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).y >=
    (int)(window->size.y * 350 / 600) &&
    sfMouse_getPositionRenderWindow(window->window).y <=
    (int)(window->size.y * 410 / 600)) {
        sfSprite_setTexture
        (sprite->save->sprt, sprite->save->text_m, sfTrue);
    } else {
        sfSprite_setTexture(sprite->save->sprt, sprite->save->text, sfTrue);
    }
}

void editing_page_menu(window_t *window, sprite_t *sprite)
{
    if (window->check == 5) {
        sfRenderWindow_drawSprite(
            window->window, sprite->help_menu->sprt, NULL);
        help_menu(sprite, window);
    }
    if (window->menu == 1)
        open_file_menu(sprite, window);
    if (window->menu == 2)
        open_edit_menu(sprite, window);
    if (window->menu == 3)
        open_pencil_menu(sprite, window);
    if (window->menu == 4)
        open_eraser_menu(sprite, window);
}
