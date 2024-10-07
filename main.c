#include <iostream>

void report(char message[])
{
    printf("%s\n", message);
}

void boot()
{
    report("Booting into Genesis OS...");
}

int main()
{
    boot();
    return 0;
}