#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
如下语句通过算术运算和逻辑运算之后i和 j的结果是（ ）
int i=0;
int j=0;
if((++i>0)||(++j>0)){
 //打印出i和j的值。
}
输出结果：i=1;j=0
*/

/*
以下程序：#include<stdio.h>

void main() {

    char grade;

    scanf(”%c”, &grade);

    switch(grade) {

        case ’A’: printf(”优秀”);

        case ’B’: printf(”良好”);

        default: printf(”中等”);

    }

}
如果输入’A’，问输出什么?（）
输出结果：优秀良好中等
*/

/*
若有定义int x = 3, y = 2和float a = 2.5, b = 3.5，则表达式：(x + y) % 2 + (int)a / (int)b的值是（）
输出结果：1 
*/

/*
C语言规定，函数返回值的类型是由（）
在定义该函数时所指定的函数类型所决定
*/

/*
以下程序的输出结果是（）。
void main () {
    char arr[2][4]；
    strcpy (arr[0],"you");strcpy (arr[1],"me");
    arr[0][3]=’&’;
    printf("%s \n",arr)；
}
输出结果：you&me
*/

/*
使用二分搜索算法在 1000 个有序元素表中搜索一个特定元素，在最坏情况下，搜索总共需要比较的次数为（）
输出结果：10
*/

/*
以下程序的运行结果是（）

int main() {

        int n;

    for(n = 1; n <= 10; n++) {

         if(n % 3 == 0) continue;

         printf("%d" ,n);

    }

}
输出结果：12457810
*/

/*
以下哪个是a->b的等效写法（）
(*a).b
*/

/*
以下叙述中正确的是（）
函数既可以直接调用自己，也可以间接调用自己
*/

/*
在小端序的机器中，

union X {

    int x;

    char y[4];

}; 如果X a; a.x = 0x11223344;//16进制则：（）
输出结果：y[3] = 11
         y[2] = 22
*/



/*
结构体变量S实际所占内存的大小为（ ）字节
sizeof(S)
*/

/*
执行下列程序:

#define MA (x,y)  (x*y )

i = 5;i = MA(i, i + 1) - 7;

变量i的值应为（）
输出结果：19
*/

/*
有如下定义：

struct date{

    int yy, mm, dd ;

}；

struct worklist{

    char name[20]；

    char sex；

    struct date birthday；

}person；

对结构体变量 person 的出生年月进行赋值时，下面正确的赋值语句是（）
输出结果：persion.birthday.yy = 1958
*/

/*
对于int* pa[5];的描述，以下哪个选项是正确的（）
pa是一个具有5个元素的指针数组，每个元素是一个int类型的指针;
*/

/*
设有如下定义：  int * ( *ptr )(); 则以下叙述中正确的是()
ptr是指向函数的指针，该函数的返回值是指向int型数据的指针
*/

/*
下列main()函数执行后的结果为（）

int func() {

    int i, j, k = 0;

    for(i = 0, j = -1; j = 0; i++, j++) {

         k++;

    }

    return k;

}

int main() {

     printf("%d\n", func());

}
输出结果：0
*/


//求两个数的最小公倍数
/*
题目描述
给出两个整数a，b，求这两个数字的最小公倍数的值（1 <= a <= 10000, 1 <= b <= 10000）
输入
输入一行，两个整数a，b
1 <= a <= 10000, 1 <= b <= 10000）
输出
输出一行，为a和b的最小公倍数的值
*/
#include <stdio.h>
int main() {
    int a, b, temp, i;
    scanf("%d %d", &a, &b);
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    for (i = a; i > 0; i++) {
        if (i % a == 0 && i % b == 0) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}