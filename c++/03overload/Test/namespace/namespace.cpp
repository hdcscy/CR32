// namespace.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "test.h"

//using namespace CR32;

//#define CR32 c;

namespace c = CR32;

namespace CR32 {

    namespace test {
        int n = 3;
    }

    int n = 32;
    struct tagTest {
        int nTest;
    };

    void foo() {
        printf("namespace CR32 foo");
    }

}

//using CR32::n;
//using namespace CR32;
/*
  C++作用域
  1. 全局域或命名空间域
  2. 局部作用域、块作用域
  3. 类域 class

*/

/*
    数据隐藏
    1. 在不同的作用域可以定义多个相同名字的变量
    2. 在访问的时候，从内向外查找（块作用域->。。。->全局作用域）    
*/

/*
   namespace 名字空间、命名空间
   1. 同一个名字空间可以在不同的cpp中拆开写，实际是在同一个空间中
   2. 名字空间可以嵌套
   3. 引用名字空间的方法：
      (1) 使用名字空间::变量名访问 CR32::n (建议用法)
      (2) 声明名字空间 using namespace CR32;
      (3) 声明只使用名字空间的部分变量或函数 using CR32::n;

   4. 名字空间取别名： namespace c=CR32; 
   5. using语句可以出现在任何可以声明的地方（块作用域，全局域均可以），相当于
      对应的代码在指定的声明位置展开
*/

void foo() {
    printf("global foo");
}


int CR32_n = 1;
//int n = -1;
int main()
{
    //int n = 0;
    {
        //int n = 1;
        using CR32::n;
        c::foo();
        printf("%d\r\n", n);
    }
    
    //printf("%d\r\n", n);

    return 0;
}

