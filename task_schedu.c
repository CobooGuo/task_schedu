/*
    task_schedu.c
    author:yuanGuo <coboo2013@126.com>
 */
#include "task_schedu.h"

#include <stdlib.h>
#include <string.h>

#define TASKSCHEDU_DEBUG

#ifdef TASKSCHEDU_DEBUG
#include <stdio.h>
#define td_printf(x...) printf(x)
#else
#define td_printf()
#endif // TASKSCHEDU_DEBUG

