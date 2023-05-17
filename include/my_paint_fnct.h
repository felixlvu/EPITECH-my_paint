/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** my_paint_fnct
*/

#include "my_paint_struct.h"

#ifndef MY_PAINT_FNCT_H_
    #define MY_PAINT_FNCT_H_
    void close_window(window_t *window);
    void init_loop(window_t *window);
    void init_window(window_t *window);
    void init_start_background(sprite_t *sprite);
    void init_newfile(sprite_t *sprite);
    void init_openfile(sprite_t *sprite);
    void open_file_button(window_t *window, sprite_t *sprite);
    void new_file_button(window_t *window, sprite_t *sprite);
    int files_buttons(window_t *window, sprite_t *sprite);
    void init_pencil(sprite_t *sprite);
    void init_eraser(sprite_t *sprite);
    void init_save(sprite_t *sprite);
    void malloc_struct(sprite_t *sprite);
    void init_struct(sprite_t *sprite, window_t *window);
    void go_start_screen(window_t *window);
    void editing_page(window_t *window, sprite_t *sprite);
    void destroy_editing_buttons(sprite_t *sprite);
    void destroy_files_buttons(sprite_t *sprite);
    void destroy_window(window_t *window);
    void free_destroy(window_t *window, sprite_t *sprite);
    void init_file(sprite_t *sprite);
    void init_edit(sprite_t *sprite);
    void init_help(sprite_t *sprite);
    void file_texture(sprite_t *sprite, window_t *window);
    void edit_texture(sprite_t *sprite, window_t *window);
    void help_texture(sprite_t *sprite, window_t *window);
    void pencil_size_texture(sprite_t *sprite, window_t *window);
    void init_pencil_size(sprite_t *sprite);
    void init_eraser_size(sprite_t *sprite);
    void eraser_size_texture(sprite_t *sprite, window_t *window);
    void init_file_menu(sprite_t *sprite);
    void file_menu_texture(sprite_t *sprite, window_t *window);
    void edit_menu_texture(sprite_t *sprite, window_t *window);
    void init_edit_menu(sprite_t *sprite);
    void init_help_menu(sprite_t *sprite);
    void help_texture(sprite_t *sprite, window_t *window);
    void help_menu(sprite_t *sprite, window_t *window);
    void open_file_menu(sprite_t *sprite, window_t *window);
    void open_edit_menu(sprite_t *sprite, window_t *window);
    void open_eraser_menu(sprite_t *sprite, window_t *window);
    void open_pencil_menu(sprite_t *sprite, window_t *window);
    void editing_page_menu(window_t *window, sprite_t *sprite);
    void allow_pencil(window_t *window, sprite_t *sprite);
    void save_texture(sprite_t *sprite, window_t *window);
    void eraser_texture(sprite_t *sprite, window_t *window);
    void pencil_texture(sprite_t *sprite, window_t *window);
    void select_scale(sprite_t *sprite, window_t *window);
    void scale_1(sprite_t *sprite, window_t *window);
    void scale_eraser_1(sprite_t *sprite, window_t *window);
    void scale_2(sprite_t *sprite, window_t *window);
    void scale_eraser_2(sprite_t *sprite, window_t *window);
    void scale_3(sprite_t *sprite, window_t *window);
    void scale_eraser_3(sprite_t *sprite, window_t *window);
    void draw_eraser_ext(sprite_t *sprite, window_t *window);
    void allow_eraser(window_t *window, sprite_t *sprite);

#endif /* !MY_PAINT_FNCT_H_ */
