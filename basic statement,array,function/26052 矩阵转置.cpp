#include <iostream>
using namespace std;
int main()
{
    int array[2][3];

    int i,j;

    //��ȡ�û����������������A
    for(i = 0;i < 2;i++){
        for(j = 0;j < 3;j++){


            cin>>array[i][j];
        }
    }

    //��������B
    int MatrixB[3][2];

    //����ת��
    /**
     *  ������������໥ת�õĻ���
     *  ��һ��������е�����һ���������
     *  һ��������е�����һ���������
     *  ע�⣺
     *  ת��֮��ľ��������������Ϊת��֮ǰ������������
     */
    for(i = 0;i < 3;i++){
        for(j = 0;j < 2;j++){
            MatrixB[i][j] = array[j][i];
        }
    }

    //�������B
    for(i = 0;i < 3;i++){
        for(j = 0;j < 2;j++){
            cout<<MatrixB[i][j]<<" ";
        }

        cout<<'\n';
    }

    return 0;
}
