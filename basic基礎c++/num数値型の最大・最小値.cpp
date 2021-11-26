#include <stdio.h>
#include <limits.h>

//各種型の最大・最小値 以下のサイトをみれば全て解決
// https://marycore.jp/prog/c-lang/data-type-min-max-values/

// int型の数値の最小値: -2147483648
// int型の数値の最大値: 2147483647 > 10^8

// long intは64bit 32bit環境で値が変わる
// long int型の数値の最小値: -9223372036854775808
// long int型の数値の最大値: 9223372036854775807

//long_long int型の数値の最小値: -9223372036854775808 > -10^18
//long_long int型の数値の最大値: 9223372036854775807

int main(void) {
    int num = 1;
    // int型の変換指定子はd
    printf("int型変数numの値: %d\n", num);

    // int型での割り算
    double div1 = num / 2;
    double div2 = num / (double)2; // キャストして割り算
    printf("%d / 2 は: %lf\n", num, div1);
    printf("%d / 2 は: %lf\n", num, div2);

    // int型、unsigned int型のサイズおよび最小値、最大値
    printf("int型のバイト数は%ldバイト\n", sizeof(num));
    printf("int型の数値の最小値: %d\n", INT_MIN);
    printf("int型の数値の最大値: %d\n", INT_MAX);
    printf("unsigned int型の数値の最小値: %d\n", 0);
    printf("unsigned int型の数値の最大値: %u\n", UINT_MAX);

		printf("\n");


    long int long_num = 1;
    // long int型の変換指定子はld
    printf("long int型変数numの値: %ld\n", long_num);

    // long int型のサイズおよび最小値、最大値
    printf("long int型のバイト数は%ldバイト\n", sizeof(long_num));
    printf("long int型の数値の最小値: %ld\n", LONG_MIN);
    printf("long int型の数値の最大値: %ld\n", LONG_MAX);
    printf("unsigned long int型の数値の最小値: %d\n", 0);
    printf("unsigned long int型の数値の最大値: %lu\n", ULONG_MAX);


		printf("\n");

    long long int long_long_num = 1;
    // long int型の変換指定子はld
    printf("long_long_num int型変数numの値: %ld\n", long_long_num);

    // long int型のサイズおよび最小値、最大値
    printf("long_long_num int型のバイト数は%ldバイト\n", sizeof(long_long_num));
    //printf("long_long_num int型の数値の最小値: %ld\n", LONG_LONG_MIN);
    printf("long_long_num int型の数値の最小値: %ld\n", LLONG_MIN);
    //printf("long_long_num int型の数値の最大値: %ld\n", LONG_LONG_MAX);
    printf("long_long_num int型の数値の最大値: %ld\n", LLONG_MAX);
    printf("unsigned long_long_num int型の数値の最小値: %d\n", 0);

    return 0;
}
