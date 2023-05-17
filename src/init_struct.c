/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** init_struct
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_paint_fnct.h"
#include "my_paint_struct.h"

void malloc_struct(sprite_t *sprite)
{
    sprite->pencil = malloc(sizeof(pencil_t));
    sprite->pencil_size = malloc(sizeof(pencil_size_t));
    sprite->edit_bg = malloc(sizeof(editing_bg_t));
    sprite->eraser = malloc(sizeof(eraser_t));
    sprite->eraser_size = malloc(sizeof(eraser_size_t));
    sprite->save = malloc(sizeof(save_t));
    sprite->file = malloc(sizeof(file_t));
    sprite->file_menu = malloc(sizeof(file_menu_t));
    sprite->edit = malloc(sizeof(edit_t));
    sprite->edit_menu = malloc(sizeof(edit_menu_t));
    sprite->help = malloc(sizeof(help_t));
    sprite->help_menu = malloc(sizeof(help_menu_t));
    sprite->draw = malloc(sizeof(draw_t));
}

void init_draw(sprite_t *sprite)
{
    sprite->draw->sprt = sfSprite_create();
    sprite->draw->text = sfTexture_create(800, 600);
    sfSprite_setTexture(sprite->draw->sprt, sprite->draw->text, sfTrue);
    sprite->draw->circle = sfCircleShape_create();
    sfCircleShape_setRadius(sprite->draw->circle, 5);
    sfCircleShape_setFillColor(sprite->draw->circle, sfBlack);
}

void init_struct(sprite_t *sprite, window_t *window)
{
    init_start_background(sprite);
    init_newfile(sprite);
    init_openfile(sprite);
    init_pencil(sprite);
    init_pencil_size(sprite);
    init_eraser(sprite);
    init_eraser_size(sprite);
    init_save(sprite);
    init_file(sprite);
    init_file_menu(sprite);
    init_edit(sprite);
    init_edit_menu(sprite);
    init_help(sprite);
    init_help_menu(sprite);
    init_draw(sprite);
    window->check = 1;
    window->pencil = 0;
    window->eraser = 0;
    window->wait_button = sfClock_create();
}
