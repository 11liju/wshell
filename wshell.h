/*
 * =====================================================================================
 *       Filename:  wshell.h
 *    Description:  
 *        Version:  1.0
 *        Created:  2013��10��16�� 20ʱ15��26��
 *         Author:  wuyue (wy), vvuyve@gmail.com
 *        Company:  UESTC
 * =====================================================================================
 */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/wait.h>
#define MAXLINE 1024
//the length of all args is ARG_MAX
#define MAXARG 10

void type_prompt();
int read_command(char **command,char **parameters);
void proc(void);

