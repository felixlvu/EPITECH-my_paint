/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** editing_button
*/

#include <SFML/Graphics.h>
#include "my_paint_struct.h"
#include "my_paint_fnct.h"

void select_scale(sprite_t *sprite, window_t *window)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        scale_1(sprite, window);
        scale_2(sprite, window);
        scale_3(sprite, window);
        scale_eraser_1(sprite, window);
        scale_eraser_2(sprite, window);
        scale_eraser_3(sprite, window);
    }
}

void allow_pencil(window_t *window, sprite_t *sprite)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) &&
    sfClock_getElapsedTime(window->wait_button).microseconds > 500000) {
        sprite->pencil->zob = 1;
        if (window->pencil == 1)
            window->pencil = 0;
        sfClock_restart(window->wait_button);
    }
}

void allow_eraser(window_t *window, sprite_t *sprite)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) &&
    sfClock_getElapsedTime(window->wait_button).microseconds > 500000) {
        sprite->eraser->pressed = 1;
        if (window->eraser == 1)
            window->eraser = 0;
        sfClock_restart(window->wait_button);
    }
}

void drawsprite_editing_page(sprite_t *sprite, window_t *window)
{
    sfRenderWindow_drawSprite(window->window, sprite->edit_bg->sprt, NULL);
    sfRenderWindow_drawSprite(window->window, sprite->draw->sprt, NULL);
    sfRenderWindow_drawSprite(window->window, sprite->save->sprt, NULL);
    sfRenderWindow_drawSprite(window->window, sprite->eraser->sprt, NULL);
    sfRenderWindow_drawSprite(window->window, sprite->pencil->sprt, NULL);
    sfRenderWindow_drawSprite(window->window, sprite->file->sprt, NULL);
    sfRenderWindow_drawSprite(window->window, sprite->edit->sprt, NULL);
    sfRenderWindow_drawSprite(window->window, sprite->help->sprt, NULL);
    sfRenderWindow_drawSprite(window->window, sprite->pencil_size->sprt, NULL);
    sfRenderWindow_drawSprite(window->window, sprite->eraser_size->sprt, NULL);
    sfRenderWindow_drawSprite(window->window, sprite->file_menu->sprt, NULL);
    sfRenderWindow_drawSprite(window->window, sprite->edit_menu->sprt, NULL);
}

void editing_page(window_t *window, sprite_t *sprite)
{
    if (window->check == 2) {
        pencil_texture(sprite, window);
        pencil_size_texture(sprite, window);
        eraser_texture(sprite, window);
        eraser_size_texture(sprite, window);
        save_texture(sprite, window);
        file_texture(sprite, window);
        file_menu_texture(sprite, window);
        edit_texture(sprite, window);
        edit_menu_texture(sprite, window);
        help_texture(sprite, window);
        drawsprite_editing_page(sprite, window);
        if (sprite->pencil->zob == 1 || sprite->eraser->pressed == 1)
            select_scale(sprite, window);
    }
    editing_page_menu(window, sprite);
}
