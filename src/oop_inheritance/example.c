#include "include/oop.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
    struct cat *c = NULL;
    struct dog *d = NULL;

    c = (struct cat *)malloc(sizeof(struct cat));
    d = (struct dog *)malloc(sizeof(struct dog));

    __define_cat_or_dog__(c, NULL);
    __define_cat_or_dog__(NULL, d);

    __inheritance__(&c, NULL);
    __inheritance__(NULL, &d);

    c->inheritance->set_age(c->inheritance, 22);
    d->inheritance->set_age(d->inheritance, 22);

    c->speak(c);
    d->speak(d);

    c->destruct(&c);
    d->destruct(&d);
}