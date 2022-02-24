#include "oop.h"
#include <stdlib.h>
#include <stdio.h>

static __animal_set_age__(struct animal *, int);
static void __cat_speak__(struct cat *);
static void __dog_speak__(struct dog *);
static void __cat_destruct__(struct cat **);
static void __dog_destruct__(struct dog **);

void __define_cat_or_dog__(struct cat *c, struct dog *d){
    if(c == NULL){
        d->speak = (void *)&__dog_speak__;
        d->destruct = (void *)&__dog_destruct__;
    }
    else{
        c->speak = (void *)&__cat_speak__;
        c->destruct = (void *)&__cat_destruct__;
    }
}

void __inheritance__(struct cat **c, struct dog **d){
    struct animal *a;
    a = (struct animal *)malloc(sizeof(struct animal));
    a->set_age = (void *)&__animal_set_age__;

    if(c == NULL)
        (*d)->inheritance = a;
    else
        (*c)->inheritance = a;
}