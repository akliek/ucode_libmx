#include "libmx.h"

int mx_strlen(const char *s) {
    int i = 0;

    if(s) {
        while(s[i])
            i++;
        return i;
    }
    return (0);
}
