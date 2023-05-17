/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** editing_button
*/

#include <SFML/Graphics.h>
#include "my_paint_struct.h"
#include "my_paint_fnct.h"

void init_pencil_size(sprite_t *sprite)
{
    sprite->pencil_size->sprt = sfSprite_create();
    sprite->pencil_size->text = sfTexture_createFromFile
    ("./src/assets/edit_page/pencil_size.png", NULL);
    sprite->pencil_size->empty = sfTexture_create(1, 1);
    sprite->pencil_size->pos = (sfVector2f){85, 190};
    sfSprite_setTexture(
    sprite->pencil_size->sprt, sprite->pencil_size->text, sfTrue);
    sfSprite_setPosition(sprite->pencil_size->sprt, sprite->pencil_size->pos);
}

void init_eraser_size(sprite_t *sprite)
{
    sprite->eraser_size->sprt = sfSprite_create();
    sprite->eraser_size->text = sfTexture_createFromFile
    ("./src/assets/edit_page/eraser_size.png", NULL);
    sprite->eraser_size->empty = sfTexture_create(1, 1);
    sprite->eraser_size->pos = (sfVector2f){85, 270};
    sfSprite_setTexture(
    sprite->eraser_size->sprt, sprite->eraser_size->text, sfTrue);
    sfSprite_setPosition(sprite->eraser_size->sprt, sprite->eraser_size->pos);
}

void init_file_menu(sprite_t *sprite)
{
    sprite->file_menu->sprt = sfSprite_create();
    sprite->file_menu->text = sfTexture_createFromFile
    ("./src/assets/edit_page/file_menu.png", NULL);
    sprite->file_menu->empty = sfTexture_create(1, 1);
    sprite->file_menu->pos = (sfVector2f){100, 50};
    sfSprite_setTexture(
    sprite->file_menu->sprt, sprite->file_menu->text, sfTrue);
    sfSprite_setPosition(sprite->file_menu->sprt, sprite->file_menu->pos);
}

void init_edit_menu(sprite_t *sprite)
{
    sprite->edit_menu->sprt = sfSprite_create();
    sprite->edit_menu->text = sfTexture_createFromFile
    ("./src/assets/edit_page/edit_menu.png", NULL);
    sprite->edit_menu->empty = sfTexture_create(1, 1);
    sprite->edit_menu->pos = (sfVector2f){320, 50};
    sfSprite_setTexture(
    sprite->edit_menu->sprt, sprite->edit_menu->text, sfTrue);
    sfSprite_setPosition(sprite->edit_menu->sprt, sprite->edit_menu->pos);
}
