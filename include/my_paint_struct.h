/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** my_paint_struct
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>

#ifndef MY_PAINT_STRUCT_H_
    #define MY_PAINT_STRUCT_H_
    typedef struct window {
        sfRenderWindow *window;
        sfEvent event;
        sfVideoMode mode;
        sfVector2u size;
        int check;
        int menu;
        int pencil;
        int eraser;
        sfClock *wait_button;
    } window_t;

    typedef struct sprite {
        sfSprite *bg_s;
        sfTexture *bg_t;
        sfVector2f bg_pos;
        sfSprite *nf_s;
        sfTexture *nf_t;
        sfTexture *nf_mouse_t;
        sfVector2f nf_pos;
        sfSprite *of_s;
        sfTexture *of_t;
        sfTexture *of_mouse_t;
        sfVector2f of_pos;
        struct pencil *pencil;
        struct pencil_size *pencil_size;
        struct editing_bg *edit_bg;
        struct eraser *eraser;
        struct eraser_size *eraser_size;
        struct save *save;
        struct file *file;
        struct file_menu *file_menu;
        struct edit *edit;
        struct edit_menu *edit_menu;
        struct help *help;
        struct help_menu *help_menu;
        struct draw *draw;
    } sprite_t;

    typedef struct pencil {
        sfSprite *sprt;
        sfTexture *text;
        sfVector2f pos;
        sfTexture *text_m;
        int scale;
        int zob;
    } pencil_t;

    typedef struct pencil_size {
        sfSprite *sprt;
        sfTexture *text;
        sfVector2f pos;
        sfTexture *empty;
    } pencil_size_t;

    typedef struct eraser {
        sfSprite *sprt;
        sfTexture *text;
        sfVector2f pos;
        sfTexture *text_m;
        int scale;
        int pressed;
    } eraser_t;

    typedef struct eraser_size {
        sfSprite *sprt;
        sfTexture *text;
        sfVector2f pos;
        sfTexture *empty;
    } eraser_size_t;

    typedef struct editing_bg {
        sfSprite *sprt;
        sfTexture *text;
        sfVector2f pos;
    } editing_bg_t;

    typedef struct save {
        sfSprite *sprt;
        sfTexture *text;
        sfVector2f pos;
        sfTexture *text_m;
    } save_t;

    typedef struct file {
        sfSprite *sprt;
        sfTexture *text;
        sfVector2f pos;
        sfTexture *text_m;
    } file_t;

    typedef struct file_menu {
        sfSprite *sprt;
        sfTexture *text;
        sfVector2f pos;
        sfTexture *empty;
    } file_menu_t;

    typedef struct edit {
        sfSprite *sprt;
        sfTexture *text;
        sfVector2f pos;
        sfTexture *text_m;
    } edit_t;

    typedef struct edit_menu {
        sfSprite *sprt;
        sfTexture *text;
        sfVector2f pos;
        sfTexture *empty;
    } edit_menu_t;

    typedef struct help {
        sfSprite *sprt;
        sfTexture *text;
        sfVector2f pos;
        sfTexture *text_m;
    } help_t;

    typedef struct help_menu {
        sfSprite *sprt;
        sfTexture *text;
        sfVector2f pos;
        sfTexture *empty;
    } help_menu_t;

    typedef struct draw {
        sfSprite *sprt;
        sfTexture *text;
        sfVector2f pos;
        sfCircleShape *circle;
        sfVector2i mouse;
    } draw_t;

#endif /* !MY_PAINT_STRUCT_H_ */
