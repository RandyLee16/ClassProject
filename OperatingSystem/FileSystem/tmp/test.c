#include <stdio.h>
#include <stdlib.h>
#include "p5.c"

void test_bitmap()
{
    BITMAP TmpBitmp;
    char tmpbuf[BLOCKSIZE];
    for (int i = 2; i <= 57; i++)
    {
        read_block(i, tmpbuf);
        memcpy(&TmpBitmp, tmpbuf, sizeof(TmpBitmp));
        if (TmpBitmp.free_block != MAX_PER_BITMAP)
            printf("bitmap = %d, free_block = %d\n", i, TmpBitmp.free_block);
    }
}

int main(int argc, char const *argv[])
{

    test_bitmap();
    return 0;
}

// /* test mkdir */
//     char tmp[BLOCKSIZE];
//     BITMAP test;
//     my_mkfs();
//     read_block(2, tmp);
//     memcpy(&test, tmp, sizeof(test));
//     printf("%d", test.free_block);

/* test parse path name */
// my_mkfs();
// char *path = "/foo/bar5sdfdasf";
// int many = parse_path(path);
// printf("how many = %d",many);
// for (int i = 0; i <many;i++)
// {
//     printf("%s\n",PathName[i]);
// }

// /* test mkdir */
//     my_mkfs();
//     my_mkdir("/a");
//     my_mkdir("/foo/abc");

/* test rmdir */
//     my_mkfs();
// my_mkdir("/dfsf");
// my_creat("/b/tmdfp.txt");
// my_creat("/dfsf/adfgad");
// my_rmdir("/b");
// my_rmdir("/b");
// my_rmdir("/dfsf");