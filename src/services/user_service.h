#ifndef USER_SERVICE_H
#define USER_SERVICE_H

#include "src/models/user.h"

typedef struct UserService {
    User *(*get_user)(struct UserService *, int);
} UserService;

UserService *create_user_service(void);

#endif