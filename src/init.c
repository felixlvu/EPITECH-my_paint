/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** init
*/

#include <SFML/Graphics.h>
#include "my_paint_struct.h"
#include "my_paint_fnct.h"

void init_window(window_t *window)
{
    window->mode = (sfVideoMode){800, 600, 32};
    window->window = sfRenderWindow_create
    (window->mode, "my_paint", sfClose | sfResize, NULL);
    sfRenderWindow_setFramerateLimit(window->window, 60);
}

void init_start_background(sprite_t *sprite)
{
    sprite->bg_t = sfTexture_createFromFile(
    "./src/assets/start_page/my_paint.png", NULL);
    sprite->bg_s = sfSprite_create();
    sprite->bg_pos = (sfVector2f){0, 0};
    sfSprite_setTexture(sprite->bg_s, sprite->bg_t, sfTrue);
    sfSprite_setPosition(sprite->bg_s, sprite->bg_pos);
}

void init_newfile(sprite_t *sprite)
{
    sprite->nf_t = sfTexture_createFromFile
    ("./src/assets/start_page/newfile.png", NULL);
    sprite->nf_mouse_t = sfTexture_createFromFile
    ("./src/assets/start_page/newfile_mouse.png", NULL);
    sprite->nf_s = sfSprite_create();
    sprite->nf_pos = (sfVector2f){50, 410};
    sfSprite_setTexture(sprite->nf_s, sprite->nf_t, sfTrue);
    sfSprite_setPosition(sprite->nf_s, sprite->nf_pos);
}

void init_openfile(sprite_t *sprite)
{
    sprite->of_t = sfTexture_createFromFile
    ("./src/assets/start_page/openfile.png", NULL);
    sprite->of_mouse_t = sfTexture_createFromFile
    ("./src/assets/start_page/openfile_mouse.png", NULL);
    sprite->of_s = sfSprite_create();
    sprite->of_pos = (sfVector2f){250, 410};
    sfSprite_setTexture(sprite->of_s, sprite->of_t, sfTrue);
    sfSprite_setPosition(sprite->of_s, sprite->of_pos);
}
