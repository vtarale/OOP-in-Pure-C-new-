#include "oop.h"
#include <stdlib.h>
#include <stdio.h>

static void __cat_speak__(struct cat *);
static void __dog_speak__(struct dog *);
static void __cat_destruct__(struct cat **);
static void __dog_destruct__(struct dog **);

void __define_cat_or_dog__(struct cat *c, struct dog *d){
    struct animal *obj_to_in;
    obj_to_in = (struct animal *)malloc(sizeof(struct animal));

}