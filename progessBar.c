#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>

void cls() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int calculate(int id) {
    int barLenght = 30;
    int process = 0;
    srand(time(0));
    int randNo = rand() % 5 + 1;
    int step =randNo;

    while (process <= 100) {
        
        int barToShow = barLenght * process / 100;

        printf("Task %d: [", id);
        for (int i = 1; i <= barLenght; i++) {
            if (i <= barToShow)
                printf("=");
            else
                printf(" ");
        }
        printf("]%d%%\n", process);
        
        

        if (process == 100)  // If 100% done, don't clear or sleep
            break;

        sleep(1);
        cls();
        
        process += step;
        if (process > 100)
            process = 100;
            
    }
    printf("Task completed");
    return 0;
}

void main() {
   calculate(1);
    
}
