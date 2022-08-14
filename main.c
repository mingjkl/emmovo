/*
 * @Author: emmovo
 * @Date: 2022-08-13 22:17:30
 * @LastEditors: emmovo
 * @LastEditTime: 2022-08-14 09:45:48
 * @FilePath: /project/emmovo/main.c
 * @Description: 
 * 
 * Copyright (c) 2022 by mingjkl@live.com/emmovo.com, All Rights Reserved. 
 */
#include "stdio.h"
#include "emmovo.h"


int main(void)
{
    char hex_string_to_uint32_t_input_str[8] = "112233AA"; //0x112233AA
    unsigned int hex_string_to_uint32_t_output_int;

    hex_string_to_uint32_t_output_int = emmovo_hex_string_to_uint32_t(hex_string_to_uint32_t_input_str);
    
    emmovo_log_divider(50);
    printf("[FCN] emmovo_hex_string_to_uint32_t \r\n");
    printf("[Input][char *str]: %s \r\n", hex_string_to_uint32_t_input_str);
    printf("[Output][int]: %d (hex: 0x%x) \r\n", hex_string_to_uint32_t_output_int, hex_string_to_uint32_t_output_int);
    emmovo_log_divider(50);

    int emmovo_string_match(char *target_string, char *cmp_string, int start_pos, int cmp_len);

    char emmovo_string_match_input_target_string[20] = "Hello world\0";
    char emmovo_string_match_input_cmp_string[10] = "llo\0";
    unsigned int emmovo_string_match_input_start_pos = 2;
    unsigned int emmovo_string_match_input_cmp_len = 3;
    int emmovo_string_match_output;

    emmovo_string_match_output = emmovo_string_match(emmovo_string_match_input_target_string,
        emmovo_string_match_input_cmp_string,
        emmovo_string_match_input_start_pos,
        emmovo_string_match_input_cmp_len);

    emmovo_log_divider(50);
    printf("[FCN] emmovo_string_match \r\n");
    printf("[Input][char *target_string]: %s \r\n", emmovo_string_match_input_target_string);
    printf("[Input][char *cmp_string]: %s \r\n", emmovo_string_match_input_cmp_string);
    printf("[Input][int start_pos]: %d \r\n", emmovo_string_match_input_start_pos);
    printf("[Input][int cmp_len]: %d \r\n", emmovo_string_match_input_cmp_len);
    printf("[Output][int]: %d \r\n", emmovo_string_match_output);
    emmovo_log_divider(50);



}
