#include <stdio.h>
#include "pico/stdlib.h"
#include <string.h>
#include <unistd.h>

char msg[20];

int print_logo()
{
    printf("%s\n", "");
    sleep_ms(200);
    printf("%s\n", "  __       _        _ _");
    sleep_ms(200);
    printf("%s\n", " / _| __ _| | _____| (_)_ __  _   ___  __");
    sleep_ms(200);
    printf("%s\n", "| |_ / _` | |/ / _ \\ | | '_ \\| | | \\ \\/ /");
    sleep_ms(200);
    printf("%s\n", "|  _| (_| |   <  __/ | | | | | |_| |>  <");
    sleep_ms(200);
    printf("%s\n", "|_|  \\__,_|_|\\_\\___|_|_|_| |_|\\__,_/_/\\_\\");
    printf("%s\n", "");
}

int main()
{
    stdio_init_all();
    while (true)
    {
        printf("# ");
        scanf("%s[^\n]", msg);

        if (strcmp(msg, "start") != 0)
        {
            printf("%s\n", msg);
        }
        if (strcmp(msg, "start") == 0)
        {
            print_logo();
        }
        else if (strcmp(msg, "ls") == 0)
        {
            printf("%s\n", "README.md");
        }
        else if (strcmp(msg, "ps") == 0)
        {
            printf("%s", "   PID TTY          TIME CMD");
            printf("%s\n", "  1263 pts/2    00:00:00 bash");
            printf("%s\n", "  1518 pts/2    00:00:00 ps");
        }
        else if (strcmp(msg, "whoami") == 0)
        {
            printf("%s\n", "root");
        }
        else if (strcmp(msg, "uname") == 0)
        {
            printf("%s\n", "linux");
        }
        else if (strcmp(msg, "lsusb") == 0)
        {
            printf("%s", "Bus 002 Device 001: ID 1d6b:0003 Linux Foundation 3.0 root hub");
            printf("%s\n", "Bus 001 Device 001: ID 1d6b:0002 Linux Foundation 2.0 root hub");
        }
        else
        {
            printf("Command '%s' not found\n", msg);
        }
        // sleep_ms(1000);
    }
}