/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-01-15 20:29:05
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-19 12:46:41
 * @FilePath: \EmbeddedShell\port\eshell_cmd.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "eShell.h"
#include <stdio.h>
#include <stdlib.h>

#include <common.h>

float para = 0;

SHELL_CMD_EXPORT_START(start,NULL);
SHELL_CMD_EXPORT_END(end,NULL);

void shell_ls_cmd(char argc, char *argv)
{
	unsigned int i = 0;
	if (argc > 1)
	{
		if (!strcmp("cmd", &argv[argv[1]]))
		{

			for (i = 0; sh.cmd[i].fp != NULL; i++)
			{
				shell_printf("%s",sh.cmd[i].cmd);
				shell_printf("\r\n");
			}
		}
		else if (!strcmp("-v", &argv[argv[1]]))
		{
			shell_printf("ls version 1.0.\r\n");
		}
		else if (!strcmp("-h", &argv[argv[1]]))
		{
			shell_printf("useage: ls [options]\r\n");
			shell_printf("options: \r\n");
			shell_printf("\t -h \t: show help\r\n");
			shell_printf("\t -v \t: show version\r\n");
			shell_printf("\t cmd \t: show all commands\r\n");
		}
	}
	else
	{
		shell_printf("ls need more arguments!\r\n");
	}
}

void shell_reset_cmd(char argc, char *argv)
{
	__disable_irq;
	delayms(100);
	SW_SystemReset();
}

SHELL_CMD_EXPORT(ls,shell_ls_cmd);
SHELL_CMD_EXPORT(reset,shell_reset_cmd);



/*const cmdFunction static_cmd[] =
	{
		{"ls", shell_ls_cmd},
		{"test", shell_test_cmd},
		{"\0", NULL}
};*/