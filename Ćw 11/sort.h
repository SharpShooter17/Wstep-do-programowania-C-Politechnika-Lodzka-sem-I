#ifndef _SORT_H
#define _SORT_H

enum boolean { falsz = 0, prawda = 1 };

extern void sort_buble(int tab[], unsigned size);
extern void sort_card(int tab[], unsigned size);
extern void sort_simple(int tab[], unsigned size);
extern void sort_quick(int tab[], unsigned il, unsigned ir);

extern void Swap(int *a, int *b);

#endif // _SORT_H
