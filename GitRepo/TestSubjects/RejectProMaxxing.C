#include <stdio.h>
#include <string.h>
#include <unistd.h>

void typeEffect(char *message, int delay) {
    for (int i = 0; message[i] != '\0'; i++) {
        printf("%c", message[i]);
        fflush(stdout);
        usleep(delay); 
    }
    printf("\n");
}

int main() {
    char answer[10];

    typeEffect("Hey you! ", 100000);
    sleep(1);
    typeEffect("I have something special to ask...", 100000);
    sleep(1);
    typeEffect("Are you ready? ", 100000);
    sleep(2);
    typeEffect("Okay... here it comes... ", 100000);
    sleep(1);
    typeEffect("Will you be mine forever?  (yes/no): ", 100000);

    scanf("%s", answer);

    if (strcmp(answer, "yes") == 0 || strcmp(answer, "Yes") == 0) {
        typeEffect("\nAwww! You made me the happiest soul alive! ", 100000);
    } else {
        typeEffect("\nOh... It's okay. I’ll still love you from afar.", 100000);
    }

    return 0;
}