// TestTree.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MyTree.h"
#include <iostream>

/*
           50
      30       70
    10  40   60   80

    10 40 30 60 80 70 50
*/

void foo() {
    CMyTree tree;

    tree.Insert(50);
    tree.Insert(50);
    tree.Insert(50);
    tree.Insert(50);
    tree.Insert(50);
    tree.Insert(50);
    tree.Insert(50);

    //层序遍历
    //tree.Layer();

    //前序遍历
    //50  30  10 40 70 60 80
    //tree.DLR(tree.GetRoot());

    //中序遍历
    //10 30 40 50 60 70 80


    /*
          30
        10  40
      : 10 30 40        
      
          40
        30
      10
      : 10 30 40
    */

    //tree.LDR(tree.GetRoot());

    //后序遍历
    //10 40 30 60 80 70 50
    tree.LRD(tree.GetRoot());

}

int main()
{
    //9+2*3+8/4




    foo();
    system("pause");
    return 0;
}

