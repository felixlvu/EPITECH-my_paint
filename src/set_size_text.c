/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** editing_button
*/

#include <SFML/Graphics.h>
#include "my_paint_struct.h"
#include "my_paint_fnct.h"

void pencil_size_texture(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >=
    (int)(window->size.x * 0 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).x <=
    (int)(window->size.x * 80 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).y >=
    (int)(window->size.y * 190 / 600) &&
    sfMouse_getPositionRenderWindow(window->window).y <=
    (int)(window->size.y * 250 / 600)) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            open_pencil_menu(sprite, window);
        }
    } else if (window->menu == 0) {
        sfSprite_setTexture(
        sprite->pencil_size->sprt, sprite->pencil_size->empty, sfTrue);
    }
}

void eraser_size_texture(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >=
    (int)(window->size.x * 0 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).x <=
    (int)(window->size.x * 80 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).y >=
    (int)(window->size.y * 270 / 600) &&
    sfMouse_getPositionRenderWindow(window->window).y <=
    (int)(window->size.y * 330 / 600)) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            open_eraser_menu(sprite, window);
        }
    } else if (window->menu == 0) {
        sfSprite_setTexture(
        sprite->eraser_size->sprt, sprite->eraser_size->empty, sfTrue);
    }
}

void file_menu_texture(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >=
    (int)(window->size.x * 100 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).x <=
    (int)(window->size.x * 290 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).y >=
    (int)(window->size.y * 0 / 600) &&
    sfMouse_getPositionRenderWindow(window->window).y <=
    (int)(window->size.y * 35 / 600)) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            open_file_menu(sprite, window);
        }
    } else if (window->menu == 0) {
        sfSprite_setTexture(
        sprite->file_menu->sprt, sprite->file_menu->empty, sfTrue);
    }
}

void edit_menu_texture(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >=
    (int)(window->size.x * 320 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).x <=
    (int)(window->size.x * 510 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).y >=
    (int)(window->size.y * 0 / 600) &&
    sfMouse_getPositionRenderWindow(window->window).y <=
    (int)(window->size.y * 35 / 600)) {
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            open_edit_menu(sprite, window);
        }
    } else if (window->menu == 0) {
        sfSprite_setTexture(
        sprite->edit_menu->sprt, sprite->edit_menu->empty, sfTrue);
    }
}
