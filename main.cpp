#include<stdio.h>
#include "read_file.h"
#include "sum.h"

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;

    if(argc < 3)
    {
        fprintf(stderr, "Usage: %s <file1> <file2>\n", argv[0]);
        exit(1);
    }
    if(!(fp1 = fopen(argv[1], "r")))
    {
        fprintf(stderr, "file1 open error\n");
        exit(2);
    }
    if(!(fp2 = fopen(argv[2], "r")))
    {
        fprintf(stderr, "file2 open error\n");
        exit(2);
    }
    
    uint32_t n1 = read_file(fp1);
    uint32_t n2 = read_file(fp2);

    printf("0x%x(%u) + 0x%x(%u) = 0x%x(%u)\n", n1, n1, n2, n2, Sum(&n1, &n2), Sum(&n1, &n2));

    return 0;
}
