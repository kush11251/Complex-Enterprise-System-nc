#include <stdio.h>
#include "src/services/user_service.h"

int main() {
    UserService *user_service = create_user_service();
    User *user = user_service->get_user(user_service, 1);
    printf("User ID: %d, Name: %s\n", user->id, user->name);
    return 0;
}