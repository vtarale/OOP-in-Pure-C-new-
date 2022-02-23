#ifndef OOP
#define OOP

struct animal{
    int age;
    int (*set_age)(struct animal *me, int age);
};

struct cat{
    struct animal *inheritance;
    int (*speak)(struct cat *me);
    int (*destruct)(struct animal **me);
};

struct dog{
    struct animal *inheritance;
    int (*speak)(struct dog *me);
    int (*destruct)(struct animal **me);
};

void __define_cat_or_dog__(struct cat *c, struct dog *d);

#endif