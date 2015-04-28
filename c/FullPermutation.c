#include <string.h>

void Swap(char *m, char *n) {
    char t = *m;
    *m = *n;
    *n = t;
}

void AllRange(char *st, int k, int l) {
    if( k == l) {
        static int s_i = 1;
        printf("%d full permunation is %s.\n", s_i++, st);
    }else {
        int i;
        for (i = k;i <= l; i++) {
            Swap(st + k,st + i);
            AllRange(st, k+1, l);
            Swap(st + k, st + i);
        }
    }
}


void Foo(char *p) {
    AllRange(p, 0, strlen(p)-1);
}


int main(void) {
    char rangestr[] = "123";
    printf("%s of full permunations is:\n", rangestr);
    Foo(rangestr);

    return 0;
}

