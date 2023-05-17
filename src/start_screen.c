/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** start_screen
*/

#include <SFML/Graphics.h>
#include "my_paint_struct.h"
#include "my_paint_fnct.h"

void open_file_button(window_t *window, sprite_t *sprite)
{
    sfVector2u size = sfRenderWindow_getSize(window->window);
    if (sfMouse_getPositionRenderWindow(window->window).x >=
    (int)(size.x * 250 / 800) &&
        sfMouse_getPositionRenderWindow(window->window).x <=
        (int)(size.x * 440 / 800) &&
        sfMouse_getPositionRenderWindow(window->window).y >=
        (int)(size.y * 410 / 600) &&
        sfMouse_getPositionRenderWindow(window->window).y <=
        (int)(size.y * 470 / 600)) {
        sfSprite_setTexture(sprite->of_s, sprite->of_mouse_t, sfTrue);
        return;
    } else
        sfSprite_setTexture(sprite->of_s, sprite->of_t, sfTrue);
    return;
}

void new_file_button(window_t *window, sprite_t *sprite)
{
    sfVector2u size = sfRenderWindow_getSize(window->window);
    if (sfMouse_getPositionRenderWindow(window->window).x >=
        (int)(size.x * 50 / 800) &&
        sfMouse_getPositionRenderWindow(window->window).x <=
        (int)(size.x * 240 / 800) &&
        sfMouse_getPositionRenderWindow(window->window).y >=
        (int)(size.y * 410 / 600) &&
        sfMouse_getPositionRenderWindow(window->window).y <=
        (int)(size.y * 470 / 600)) {
        sfSprite_setTexture(sprite->nf_s, sprite->nf_mouse_t, sfTrue);
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            window->check = 2;
        return;
    } else
        sfSprite_setTexture(sprite->nf_s, sprite->nf_t, sfTrue);
    return;
}

int files_buttons(window_t *window, sprite_t *sprite)
{
    if (window->check == 1) {
        sfRenderWindow_drawSprite(window->window, sprite->bg_s, NULL);
        open_file_button(window, sprite);
        new_file_button(window, sprite);
        sfRenderWindow_drawSprite(window->window, sprite->of_s, NULL);
        sfRenderWindow_drawSprite(window->window, sprite->nf_s, NULL);
    }
    return 0;
}

void go_start_screen(window_t *window)
{
    if (window->check == 2) {
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            window->check = 1;
    }
}
