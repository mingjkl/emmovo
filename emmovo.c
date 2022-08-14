/*
 * @Author: emmovo
 * @Date: 2022-08-13 22:12:43
 * @LastEditors: emmovo
 * @LastEditTime: 2022-08-14 09:22:47
 * @FilePath: /project/emmovo/emmovo.c
 * @Description: 
 * 
 * Copyright (c) 2022 by mingjkl@live.com/emmovo.com, All Rights Reserved. 
 */

#include <stdio.h>
#include <string.h>


void emmovo_log_divider(int len)
{
    for(int p = 0; p < len; p++)
    {
        printf("=");
    }
    printf("\r\n");
}


unsigned int emmovo_hex_string_to_uint32_t(char *str)
{
    int p;
    int temp_num = 0;
    unsigned int uint32_t_value = 0;
    unsigned int order = 0x10000000;

    for(p = 0; p < 8; p++)
    {
        
        if((str[p] >= '0')&&(str[p] <= '9'))
        {
            temp_num = str[p] - '0';
        }
        if((str[p] >= 'A')&&(str[p] <= 'F'))
        {
            temp_num = str[p] - 55;
        }
        if((str[p] >= 'a')&&(str[p] <= 'f'))
        {
            temp_num = str[p] - 87;
        }

        uint32_t_value += temp_num * order;
        order >>= 4;
        
    }
    return uint32_t_value;
}

int emmovo_string_match(char *target_string, char *cmp_string, int start_pos, int cmp_len)
{
    int p;

    int match_degee = 0;

    for(p = 0; p < cmp_len; p++)
    {
        if(target_string[start_pos + p] == cmp_string[p])
        {
            match_degee++;
        }       
    }

    if (match_degee == cmp_len)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}