/*
** EPITECH PROJECT, 2021
** mylist
** File description:
** linked list
*/

#ifndef MY_H_
#   define MY_H_

#include <SFML/Graphics.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio/Music.h>
#include <SFML/Audio/Sound.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "constant.h"
#include "texture.h"

typedef struct vec2d {
    int x;
    int y;
} vec2d_t;

typedef struct my_sprite {
    int id;
    int state;
    bool should_show;
    sfSprite *sprite;
    sfIntRect rectangle;
    sfVector2f position;
    float scaling;
} my_sprite_t;

typedef struct my_music {
    sfMusic *game_mus;
} my_music_t;

typedef struct icon {
    my_sprite_t *my_sprite;
    my_sprite_t *copy;
} icon_t;

typedef struct player {
    int health;
    int gold;
    bool playing;
} player_t;

typedef struct mob {
    my_sprite_t *my_sprite;
    int health;
    int type;
    int speed;
    int reached;
} mob_t;

typedef struct tower_spot {
    my_sprite_t *my_sprite;
    int type;
    bool used;
} tower_spot_t;

typedef struct my_defender {
    int waveTicks;
    int nextWave;
    int ticks;
    mob_t **mobs;
    tower_spot_t **towers;
    int mobs_size;
    player_t *player;
    my_sprite_t *home_title;
    my_sprite_t *close_button;
    my_sprite_t *play_button;
    my_sprite_t *home_button;
    my_sprite_t *menu_background;
    my_sprite_t *game_background;
    my_music_t *game_music;
    sfMusic *song;
    icon_t *fire_icon;
    icon_t *freeze_icon;
    icon_t *light_icon;
    sfClock *clock;
    bool should_clock;
    bool restart;
    bool pause;
    sfRenderWindow *window;
} defender_t;

typedef struct file_content {
    char *content;
    int size;
} file_content_t;

void update_animation(mob_t *mob);
void remove_life(defender_t *my_defender);
void move_left(mob_t *mob);
void move_right(mob_t *mob);
void move_up(mob_t *mob);
void move_down(mob_t *mob);
void handle_movement(mob_t *mob, defender_t *my_defender);
void update_seed(void);
int random_int(int range);
int random_in_range(int min, int max);
void update_mobs(defender_t *my_defender);
void add_mob(defender_t *my_defender);
void render_mobs(defender_t *my_defender);
void mob_setup(defender_t *my_defender);
void press_pause_button(defender_t *my_defender);
void click_home_button(defender_t *my_defender);
void click_play_button(defender_t *my_defender);
void reset_defender(defender_t *my_defender);
void escape_key(defender_t *my_defender, sfEvent event);
void hide_all_icon_copy(defender_t *my_defender);
void render_icons(defender_t *my_defender);
void on_icon_click(defender_t *my_defender);
void update_icons(defender_t *my_defender);
icon_t *setup_icon(char *filepath, float scaling);
void update_buttons_state(defender_t *my_defender);
bool mouse_over_sprite(sfRenderWindow *window, my_sprite_t *my_sprite);
sfIntRect get_sprite_size(sfSprite *sprite);
void update_sprite_pos(my_sprite_t *my_sprite, int type);
void update_sprite_scale(my_sprite_t *my_sprite, float scale);
sfVector2f to_vector(float x, float y);
void handle_events(defender_t *my_defender);
void draw_my_sprite(sfRenderWindow *window, my_sprite_t *my_sprite);
my_sprite_t *setup_sprite(char *filepath, float scale);
void left_click(defender_t *my_defender, sfEvent event);
void destroy_window(defender_t *my_defender);
void render_background(defender_t *my_defender);
bool valid_window(sfRenderWindow *window);
void start_render(defender_t *my_defender);
void handle_clock(defender_t *my_defender);
bool should_clock(defender_t *my_defender);
my_music_t *setup_music (char *filepath);
void destroy_sound(defender_t *my_defender);
defender_t *new_defender();
sfRenderWindow *create_window(void);
char *add_to_str(char *str, char *addition);
int count_my_columns(char **map);
int count_my_character(char *str, char search);
char **my_str_to_word_array(char *str, char separation);
bool equals(char *str, char *compared);
int my_strlen(char *str);
void my_putchar(char c);
int my_get_nbr(char *str);
void my_putstr(char *str);
int my_put_nbr(int nb);
#endif
