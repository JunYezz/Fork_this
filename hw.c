#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;

    FILE* fp = fopen("data.bin", "wb");
    fputs("10,20,30,40,50,60,70,80,90,100", fp);
    fclose(fp);
    fp = fopen("data.bin", "rb");

    //fseek(fp, -2, SEEK_END);

    num = fseek(fp, 3, SEEK_SET);
    fwrite(&num, sizeof(int), 1, fp);
    putchar(fgetc(fp));

    //fseek(fp, 2, SEEK_CUR);

    fclose(fp);
}
