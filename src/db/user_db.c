#include "user_db.h"

User *get_user_from_db_impl(int id) {
    // Simulate database query
    User *user = malloc(sizeof(User));
    user->id = id;
    user->name = "John Doe";
    return user;
}