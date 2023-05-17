/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** editing_button
*/

#include <SFML/Graphics.h>
#include "my_paint_struct.h"
#include "my_paint_fnct.h"

void init_file(sprite_t *sprite)
{
    sprite->file->sprt = sfSprite_create();
    sprite->file->text = sfTexture_createFromFile
    ("./src/assets/edit_page/file.png", NULL);
    sprite->file->pos = (sfVector2f){100, -25};
    sfSprite_setTexture(sprite->file->sprt, sprite->file->text, sfTrue);
    sfSprite_setPosition(sprite->file->sprt, sprite->file->pos);
    sprite->file->text_m = sfTexture_createFromFile
    ("./src/assets/edit_page/file_mouse.png", NULL);
}

void init_edit(sprite_t *sprite)
{
    sprite->edit->sprt = sfSprite_create();
    sprite->edit->text = sfTexture_createFromFile
    ("./src/assets/edit_page/edit.png", NULL);
    sprite->edit->pos = (sfVector2f){320, -25};
    sfSprite_setTexture(sprite->edit->sprt, sprite->edit->text, sfTrue);
    sfSprite_setPosition(sprite->edit->sprt, sprite->edit->pos);
    sprite->edit->text_m = sfTexture_createFromFile
    ("./src/assets/edit_page/edit_mouse.png", NULL);
}

void init_help(sprite_t *sprite)
{
    sprite->help->sprt = sfSprite_create();
    sprite->help->text = sfTexture_createFromFile
    ("./src/assets/edit_page/help.png", NULL);
    sprite->help->pos = (sfVector2f){540, -25};
    sfSprite_setTexture(sprite->help->sprt, sprite->help->text, sfTrue);
    sfSprite_setPosition(sprite->help->sprt, sprite->help->pos);
    sprite->help->text_m = sfTexture_createFromFile
    ("./src/assets/edit_page/help_mouse.png", NULL);
}

void init_help_menu(sprite_t *sprite)
{
    sprite->help_menu->sprt = sfSprite_create();
    sprite->help_menu->text = sfTexture_createFromFile
    ("./src/assets/help_page/help_menu.png", NULL);
    sprite->help_menu->empty = sfTexture_create(1, 1);
    sprite->help_menu->pos = (sfVector2f){0, 0};
    sfSprite_setTexture(
    sprite->help_menu->sprt, sprite->help_menu->text, sfTrue);
    sfSprite_setPosition(sprite->help_menu->sprt, sprite->help_menu->pos);
}
