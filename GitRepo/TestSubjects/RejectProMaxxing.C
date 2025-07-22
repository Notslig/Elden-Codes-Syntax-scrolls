#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <wchar.h>
#include<locale.h>

void typeEffect(const char *message, int delay) {
    for (int i = 0; message[i] != '\0'; i++) {
        printf("%c", message[i]);
        fflush(stdout);
        usleep(delay); 
    }
    printf("\n");
}

int main() {
    char answer[10];
    setlocale(LC_ALL,"");
wchar_t ask[]=L" \n       ⢀⣠⠤⠔⠒⠒⠒⠒⠒⠢⠤⢤⡀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⢀⠴⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠲⣄⠀⠀⠀\n⠀⠀⡰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠋⠦⠀\n⠀⡸⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧\n⠀⡇⠀⠀⠀⢀⡶⠛⣿⣷⡄⠀⠀⠀⣰⣿⠛⢿⣷⡄⠀⠀⠘⣿⠀\n⠀⡇⠀⠀⠀⢸⣷⣶⣿⣿⡇⠀⠀⠀⢻⣿⣶⣿⣿⣿⠀⠀⠀⢸⠀\n⠀⡇⠀⠀⠀⠈⠛⠻⠿⠟⠁⠀⠀⠀⠈⠛⠻⠿⠛⠁⠀⠀⠀⢸\n⠀⠹⣄⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠏⠁\n⠀⠀⠈⠢⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣚⡁⠀⠀\n⠀⠀⠀⠀⠈⠙⠒⢢⡤⠤⠤⠤⠤⠤⠖⠒⠒⠋⠉⠉⠈⢙⢨⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹\n⠀⠀⠀⠀⠀⠀⠀⢸⡀⠀⠀⠀⠀⣤⠀⠀⠀⢀⣀⣀⣀⠀⠀⠀⢸\n⠀⠀⠀⠀⠀⠀⠀⠈⡇⠀⠀⠀⢠⣿⠀⠀⠀⢸⠀⠀⣿⠀⠀⠀⣸\n⠀⠀⠀⠀⠀⠀⠀⠀⢱⠀⠀⠀⢸⠘⡆⠀⠀⢸⣀⡰⠋⣆⠀⣠⠇\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠳⠤⠤⠼⠀⠘⠤⠴⠃⠀⠀⠀⠈⠉⠁\n";
    

    typeEffect("Hey! ", 10000);
    sleep(1);
    typeEffect("Evelyn! ", 10000);
    sleep(1);
    typeEffect("Hey Eve! ", 10000);
    sleep(1);
    typeEffect("\033[1;33mEvelyn:Yes\033[0m\n ", 10000);
    sleep(1);
    typeEffect("Umm So I have been thinking about us lately  \n", 10000);
    sleep(1);
    typeEffect("\033[1;33mEvelyn:Hmm\033[0m\n ", 10000);
    sleep(2);
    typeEffect(" We should prolly get married Ms.Green  ", 10000);
    sleep(1);
    typeEffect(" \033[1;33mEvelyn:How do you know about that\033[0m\n  ", 10000);
    sleep(1);
    typeEffect(" Whats the answer then\n", 10000);
    sleep(1);
    wprintf(L"%ls", ask);

    scanf("%s", answer);

    if (strcmp(answer, "yes") == 0 || strcmp(answer, "Yes") == 0 || strcmp(answer,"YES")==0) {
        typeEffect("\033[1;33mEvelyn:If only you keep it as a secret\033[0m\n  ", 10000);
        sleep(1);
        
    } else {
        typeEffect("\033[1;33mEvelyn:I dont think you are even ready for it darling\033[0m\n  ", 10000);
    }

    return 0;
}