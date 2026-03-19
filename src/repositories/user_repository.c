#include "user_repository.h"
#include "db/user_db.h"

UserRepository *create_user_repository() {
    UserRepository *user_repository = malloc(sizeof(UserRepository));
    user_repository->get_user = get_user_from_db;
    return user_repository;
}

User *get_user_from_db(UserRepository *user_repository, int id) {
    return get_user_from_db_impl(id);
}