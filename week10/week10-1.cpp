/// week10-1.cpp �禡�I�s�禡 Recursion ���j N���h
/// �H�e�O�� for�j��g, ���ѥΡu�禡�I�s�禡�v�Ӽg
#include <stdio.h>
int func(int n) {
    if(n==1) return 1; ///�פ����, ���u�ƾ��k�Ǫk�vN=1����
    return n * func(n-1); /// �禡�I�s�禡
}
int main()
{
    printf("�п�JN:");
    int N;
    scanf("%d", &N);
    int ans = func(N);
    printf("%d", ans);
}
