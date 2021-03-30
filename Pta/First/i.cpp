#include <iostream>

#include <algorithm>
#include <cmath>
#define MAXSIZE 1000
using namespace std;

typedef struct
{
    int key;
    char *otherinfo;
} ElemType;

typedef struct
{
    ElemType *r;
    int length;
} SqList;

int Partition(SqList &L, int low, int high);
void QSort(SqList &L, int low, int high);

void Create_Sq(SqList &L)
{
    int i, n;
    cin >> n; //输入的值不大于 MAXSIZE
    for (i = 1; i <= n; i++)
    {
        cin >> L.r[i].key;
        L.length++;
    }
}

void show(SqList L)
{
    int i;
    for (i = 1; i <= L.length; i++)
        if (i == 1)
            cout << L.r[i].key;
        else
            cout << " " << L.r[i].key;
}

int main()
{
    SqList L;
    L.r = new ElemType[MAXSIZE + 1];
    L.length = 0;
    Create_Sq(L);
    QSort(L, 1, L.length);
    show(L);
    return 0;
}

/* 请在这里填写答案 */

int Partition(SqList &L, int low, int high);