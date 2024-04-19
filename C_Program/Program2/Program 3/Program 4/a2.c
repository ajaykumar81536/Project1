# include<stdio.h>
# include<math.h>

int calculateper(int p, int c, int m);

int main() {
    int p = 98;
    int c = 89;
    int m = 85;
    printf("calculate percentage of pcm : %d", calculateper(p, c, m));
    return 0;

}

int calculateper(int p, int c, int m) {
    return (p+c+m)/3;
}