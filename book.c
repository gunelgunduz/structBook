#include <stdio.h>
#include <stdlib.h>
#include<math.h>

struct books{
   char* bookname;
   char* write;
   int page;
   int year;
};

int main()
{
    int i;
    struct books x[2];

    x[0].bookname="Harry Potter ve Felsefe dasi";
    x[0].write="J.K.Rowling";
    x[0].page=1129;
    x[0].year=1999;

    x[1].bookname="Bu Olke";
    x[1].write="Cemil Meric";
    x[1].page=245;
    x[1].year=1960;

    for(i=0; i<2; i++){
        printf("%d.Book\n", i+1);
        printf("Book Name:%s\n", x[i].bookname);
        printf("Write:%s\n", x[i].write);
        printf("Page:%d\n", x[i].page);
        printf("Yera:%d\n\n", x[i].year);
    }
    return 0;
}
