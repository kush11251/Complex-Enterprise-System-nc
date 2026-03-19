#include "string_utils.h"
#include <stdlib.h>
#include <string.h>

char *string_duplicate(const char *str) {
    char *duplicate = malloc(strlen(str) + 1);
    strcpy(duplicate, str);
    return duplicate;
}