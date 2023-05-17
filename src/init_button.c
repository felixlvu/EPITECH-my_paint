/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** init_button
*/

#include <SFML/Graphics.h>
#include "my_paint_struct.h"
#include "my_paint_fnct.h"

void init_pencil(sprite_t *sprite)
{
    sprite->pencil->text = sfTexture_createFromFile
    ("./src/assets/edit_page/pencil.png", NULL);
    sprite->pencil->sprt = sfSprite_create();
    sprite->pencil->pos = (sfVector2f){-110, 190};
    sfSprite_setTexture(sprite->pencil->sprt, sprite->pencil->text, sfTrue);
    sfSprite_setPosition(sprite->pencil->sprt, sprite->pencil->pos);
    sprite->edit_bg->sprt = sfSprite_create();
    sprite->edit_bg->text = sfTexture_createFromFile
    ("./src/assets/edit_page/editing_bg.png", NULL);
    sprite->edit_bg->pos = (sfVector2f){0, 0};
    sfSprite_setTexture(sprite->edit_bg->sprt, sprite->edit_bg->text, sfTrue);
    sfSprite_setPosition(sprite->edit_bg->sprt, sprite->edit_bg->pos);
    sprite->pencil->text_m = sfTexture_createFromFile
    ("./src/assets/edit_page/pencil_mouse.png", NULL);
}

void init_eraser(sprite_t *sprite)
{
    sprite->eraser->sprt = sfSprite_create();
    sprite->eraser->text = sfTexture_createFromFile
    ("./src/assets/edit_page/eraser.png", NULL);
    sprite->eraser->pos = (sfVector2f){-110, 270};
    sfSprite_setTexture(sprite->eraser->sprt, sprite->eraser->text, sfTrue);
    sfSprite_setPosition(sprite->eraser->sprt, sprite->eraser->pos);
    sprite->eraser->text_m = sfTexture_createFromFile
    ("./src/assets/edit_page/eraser_mouse.png", NULL);
}

void init_save(sprite_t *sprite)
{
    sprite->save->sprt = sfSprite_create();
    sprite->save->text = sfTexture_createFromFile
    ("./src/assets/edit_page/save.png", NULL);
    sprite->save->pos = (sfVector2f){-110, 350};
    sfSprite_setTexture(sprite->save->sprt, sprite->save->text, sfTrue);
    sfSprite_setPosition(sprite->save->sprt, sprite->save->pos);
    sprite->save->text_m = sfTexture_createFromFile
    ("./src/assets/edit_page/save_mouse.png", NULL);
}
