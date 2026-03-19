#ifndef USER_REPOSITORY_H
#define USER_REPOSITORY_H

#include "user.h"

typedef struct UserRepository {
    User *(*get_user)(struct UserRepository *, int);
} UserRepository;

UserRepository *create_user_repository(void);

#endif