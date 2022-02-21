/*
    Author: Vihaan Tarale
*/

// needed libs
#include "include/oop.h"
#include <stdlib.h>
#include <stdio.h>

int main(void){
    // construct object
    struct object *obj;
    obj = (struct object *)malloc(sizeof(struct object)); // create object

    __define__(obj);

    printf("Welcome\n");

    // test
    obj->set_data(obj, 21);
    obj->display(obj);
    obj->set_data(obj, 12);
    obj->display(obj);

    // finally destruct the object
    obj->destruct(&obj);
}