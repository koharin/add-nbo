#include "read_file.h"

uint32_t read_file(FILE *fp)
{
    uint32_t *buf;

    buf = (uint32_t*)malloc(sizeof(uint32_t));

    fread(buf, 1, 4, fp);

    uint32_t n = ntohl(*buf);

    free(buf);
    fclose(fp);

    return n;
}
