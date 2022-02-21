/*
    Author:Vihaan Tarale
*/

// needed libs
#include "oop.h"
#include <stdlib.h>
#include <stdio.h>

static void __object_set_data__(struct object *, int);
static void __object_display__(struct object *);
static void __object_destruct__(struct object **);

void __define__(struct object *me){
    //methods
    me->set_data = (void *)&__object_set_data__;
    me->display = (void *)&__object_display__;
    me->destruct = (void *)&__object_destruct__;
}

static void __object_set_data__(struct object *me, int data){
    me->data = data;
}

static void __object_display__(struct object *me){
    printf("Data: %i\n", me->data);
}

static void __object_destruct__(struct object **me){
    free(*me);
}