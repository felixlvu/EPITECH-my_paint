/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** free_destroy
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_paint_struct.h"
#include "my_paint_fnct.h"

void close_window(window_t *window)
{
    while (sfRenderWindow_pollEvent(window->window, &window->event)) {
        if (window->event.type == sfEvtClosed)
            sfRenderWindow_close(window->window);
    }
    window->size = sfRenderWindow_getSize(window->window);
}

void destroy_editing_buttons(sprite_t *sprite)
{
    sfSprite_destroy(sprite->pencil->sprt);
    sfTexture_destroy(sprite->pencil->text);
    sfTexture_destroy(sprite->pencil->text_m);
    sfSprite_destroy(sprite->eraser->sprt);
    sfTexture_destroy(sprite->eraser->text);
    sfTexture_destroy(sprite->eraser->text_m);
    sfSprite_destroy(sprite->edit_bg->sprt);
    sfTexture_destroy(sprite->edit_bg->text);
    free(sprite->edit_bg);
    free(sprite->pencil);
    free(sprite->eraser);
}

void destroy_window(window_t *window)
{
    sfRenderWindow_destroy(window->window);
    free(window);
}

void destroy_files_buttons(sprite_t *sprite)
{
    sfSprite_destroy(sprite->of_s);
    sfTexture_destroy(sprite->of_t);
    sfSprite_destroy(sprite->nf_s);
    sfTexture_destroy(sprite->nf_t);
    sfSprite_destroy(sprite->bg_s);
    sfTexture_destroy(sprite->bg_t);
    free(sprite);
}

void free_destroy(window_t *window, sprite_t *sprite)
{
    destroy_files_buttons(sprite);
    destroy_editing_buttons(sprite);
    destroy_window(window);
}
