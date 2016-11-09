// 20_List_Reverse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

class Node
{
public:
    int nData;
    Node* pNext;

    Node():nData(0),pNext(nullptr)
    {
    }
};

void PrintList(Node* pHead)
{
    Node* pNode = pHead;

    while(pNode)
    {
        cout<<pNode->nData<<" "; 
        pNode = pNode->pNext;
    }

    cout<<endl;
}

void DeleteList(Node* pHead)
{
   Node* pNode = pHead;
   while(pNode)
   {
       Node* pNext = pNode->pNext;
       delete pNode;
       pNode = pNext;
   }
}

Node* CreateList(int aData[], int nLen)
{
    Node* pHead = nullptr;

    int i = 0;
    Node* pPre = nullptr;
    while (i < nLen)
    {
        Node* pNode = new Node();
        pNode->nData = aData[i++];

        if(!pHead)
        {
            pHead = pNode;
        }
        else
        {
            pPre->pNext = pNode;
        }

        pPre = pNode;
    }

    return pHead;
}

Node* ReverseList(Node* pHead)
{
    Node* pNewHead = nullptr;
    PrintList(pHead);

    Node* pPre = nullptr;
    Node* pNode = pHead;
    while(pNode)
    {
        Node* pNext = pNode->pNext;
        pNode->pNext = pPre;
        pPre = pNode;
        pNode = pNext;
    }

    PrintList(pPre);
    return pPre;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int aData1[] = {0,1,2};
    int aData2[] = {0,1,2,3,4,5};
    int aData3[] = {0,1};
    int aData4[] = {0};
    Node* pList1 = CreateList(aData1, ARRAYSIZE(aData1));
    Node* pList2 = CreateList(aData2, ARRAYSIZE(aData2));
    Node* pList3 = CreateList(aData3, ARRAYSIZE(aData3));
    Node* pList4 = CreateList(aData4, ARRAYSIZE(aData4));

    pList1 = ReverseList(pList1);
    pList2 = ReverseList(pList2);
    pList3 = ReverseList(pList3);
    pList4 = ReverseList(pList4);

    DeleteList(pList1);
    DeleteList(pList2);
    DeleteList(pList3);
    DeleteList(pList4);

    getchar();

    return 0;
}

