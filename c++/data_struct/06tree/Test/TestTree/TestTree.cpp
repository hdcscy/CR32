// TestTree.cpp : �������̨Ӧ�ó������ڵ㡣
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

    //�������
    //tree.Layer();

    //ǰ�����
    //50  30  10 40 70 60 80
    //tree.DLR(tree.GetRoot());

    //�������
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

    //�������
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
