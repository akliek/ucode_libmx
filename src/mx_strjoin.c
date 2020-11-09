#include "libmx.h"

char *mx_strjoin(char const *s1, char const *s2) {
    char *joined;

    if(s1 == NULL && s2 == NULL)
        return NULL;
    if(s1 == NULL)
        return mx_strdup(s2);
    if(s2 == NULL)
        return mx_strdup(s1);
    joined = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
    joined = mx_strcat(joined, s1);
    joined = mx_strcat(joined, s2);
    return joined;
}
