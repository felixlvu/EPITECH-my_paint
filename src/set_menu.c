/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** editing_button
*/

#include <SFML/Graphics.h>
#include "my_paint_struct.h"
#include "my_paint_fnct.h"

void file_texture(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >=
    (int)(window->size.x * 100 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).x <=
    (int)(window->size.x * 290 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).y >=
    (int)(window->size.y * 0 / 600) &&
    sfMouse_getPositionRenderWindow(window->window).y <=
    (int)(window->size.y * 35 / 600)) {
        sfSprite_setTexture
        (sprite->file->sprt, sprite->file->text_m, sfTrue);
    } else {
        sfSprite_setTexture(sprite->file->sprt, sprite->file->text, sfTrue);
    }
}

void edit_texture(sprite_t *sprite, window_t *window)
{
    if (sfMouse_getPositionRenderWindow(window->window).x >=
    (int)(window->size.x * 320 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).x <=
    (int)(window->size.x * 510 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).y >=
    (int)(window->size.y * 0 / 600) &&
    sfMouse_getPositionRenderWindow(window->window).y <=
    (int)(window->size.y * 35 / 600)) {
        sfSprite_setTexture
        (sprite->edit->sprt, sprite->edit->text_m, sfTrue);
    } else {
        sfSprite_setTexture(sprite->edit->sprt, sprite->edit->text, sfTrue);
    }
}

void help_menu(sprite_t *sprite, window_t *window)
{
    sfSprite_setTexture
            (sprite->help_menu->sprt, sprite->help_menu->text, sfTrue);
    window->check = 5;
    if (sfMouse_getPositionRenderWindow(window->window).x >=
    (int)(window->size.x * 12 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).x <=
    (int)(window->size.x * 44 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).y >=
    (int)(window->size.y * 16 / 600) &&
    sfMouse_getPositionRenderWindow(window->window).y <=
    (int)(window->size.y * 47 / 600)) {
        sfSprite_setTexture
        (sprite->help->sprt, sprite->help->text_m, sfTrue);
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            window->check = 2;
            sfSprite_setTexture(
        sprite->help_menu->sprt, sprite->help_menu->empty, sfTrue);
        }
    }
}

void help_texture(sprite_t *sprite, window_t *window)
{
    sfSprite_setTexture
            (sprite->help_menu->sprt, sprite->help_menu->empty, sfTrue);
    if (sfMouse_getPositionRenderWindow(window->window).x >=
    (int)(window->size.x * 540 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).x <=
    (int)(window->size.x * 730 / 800) &&
    sfMouse_getPositionRenderWindow(window->window).y >=
    (int)(window->size.y * 0 / 600) &&
    sfMouse_getPositionRenderWindow(window->window).y <=
    (int)(window->size.y * 35 / 600)) {
        sfSprite_setTexture
        (sprite->help->sprt, sprite->help->text_m, sfTrue);
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            help_menu(sprite, window);
        }
    } else {
        sfSprite_setTexture(
        sprite->help->sprt, sprite->help->text, sfTrue);
    }
}
