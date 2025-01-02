#ifndef __CATEYE__
#define __CATEYE__

#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

#ifndef CATEYE_INTERPRETER
#   define CATEYE_INTERPRETER "python3"
#endif /* CATEYE_INTERPRETER */

void cateye_write(char *name, char *text) {
    FILE *fptr;
    fptr = fopen(name, "w");
    fprintf(fptr, text);
    fclose(fptr); 
}

void cateye_run(bool save) {
    system(strcat(CATEYE_INTERPRETER, " .cateye.py"));
    if (!save) {
        remove(".cateye.py");
    }
}

#ifndef CATEYE_SAVE_FILES
#    define CATEYE(s)                    \
         cateye_write(".cateye.py", #s); \
         cateye_run(false);
#else
#   define CATEYE(s)                     \
         cateye_write(".cateye.py", #s); \
         cateye_run(true);
#endif /* CATEYE_SAVE_FILES */

#endif /* __CATEYE__ */
