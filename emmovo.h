/*
 * @Author: emmovo
 * @Date: 2022-08-13 22:12:50
 * @LastEditors: emmovo
 * @LastEditTime: 2022-08-14 09:30:38
 * @FilePath: /project/emmovo/emmovo.h
 * @Description: 
 * 
 * Copyright (c) 2022 by mingjkl@live.com/emmovo.com, All Rights Reserved. 
 */


#define endl ss   //换行符替换


/**
 * @brief  : 使用‘=’作为分割线长度
 * @param {int} len  长度
 * @return {*}
 */
void emmovo_log_divider(int len);

/**
 * @brief  : 将十六进制格式的字符串转为int
 * @param {char} *str char[8] = "aaaaaaaa" to int aaaaaaaa
 *        e.g. 0x11223344 str[8] = "11223344"
 * @return {*} return int = 11223344
 */
unsigned int hex_string_to_uint32_t(char *str);

/**
 * @brief  :  判断target_string中的位置start_pos开始字符段是否与cmp_string完全匹配
 * @param {char} *target_string 待匹配字符串
 * @param {char} *cmp_string    模板字符串
 * @param {int} start_pos   开始对比位置
 * @param {int} cmp_len     对比长度
 * @return {*}  完全匹配返回1 否则返回0
 *        e.g. target_string[10] = "Hello world"
 *             cmp_string[3] = "llo"
 *             start_pos = 2
 *             cmp_len = 3
 *             return 1
 *        e.g. target_string[10] = "Hello world"
 *             cmp_string[3] = "llo"
 *             start_pos = 1
 *             cmp_len = 3
 *             return 0
 *        e.g. target_string[10] = "Hello world"
 *             cmp_string[3] = "lxo"
 *             start_pos = 2
 *             cmp_len = 3
 *             return 0
 */
int emmovo_string_match(char *target_string, char *cmp_string, int start_pos, int cmp_len);