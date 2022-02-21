/*
    Author:Vihaan Tarale
*/

#ifndef OOP
#define OOP

struct object{
    int data;

    //methods
    int (*init)(struct object *me, int data);
    int (*set_data)(struct object *me, int data);
    int (*display)(struct object *me);
    int (*destruct)(struct object **me);
};

void __define__(struct object *me);

#endif