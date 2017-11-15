#ifndef _SORT_H
#define _SORT_H

enum boolean { False = 0, True = 1 };

extern void sort_buble(int tab[], unsigned size);
extern void sort_card(int tab[], unsigned size);
extern void sort_simple(int tab[], unsigned size);
extern void sort_quick(int tab[], unsigned il, unsigned ir);

#endif /*_SORT_H*/
