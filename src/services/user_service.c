#include "user_service.h"
#include "user_repository.h"

UserService *create_user_service() {
    UserService *user_service = malloc(sizeof(UserService));
    user_service->get_user = get_user;
    return user_service;
}

User *get_user(UserService *user_service, int id) {
    UserRepository *user_repository = create_user_repository();
    return user_repository->get_user(user_repository, id);
}