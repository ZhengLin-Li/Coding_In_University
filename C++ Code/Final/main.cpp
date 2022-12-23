#include<iostream>
#include "write_message.h"
#include "uncompress.h"
#include "hufftree.h"
#include "huffmancode.h"
using namespace std;

int printMenu();

bool checkFileName(char *name, int type);

int main() {
    int m;
    //
    int choice;
    char filename[100]; //compress.txt����λ��
    char filename1[100];  //������ļ���Ŀ¼����λ��
    char filename2[100];  //uncompressed.txt
    char filename3[100];  //config.txt���ڵ�Ŀ¼
    char filename4[100];  //Only0And1.txt
    while ((choice = printMenu()) != 0) {
        if (choice == 1) {
            TreeNode p[10000];
            HuffCode HC;
            cout << "�������ļ�·��(.txt��β)" << endl;
            cin.sync();
            cin.getline(filename, 100);
//            strcpy(filename1,"C:\\Users\\Zhenglin Li\\Desktop\\FileRecv\\compress.txt");
            cout << filename << endl;
            if (checkFileName(filename, 1)) {
                cout << "��ʼѹ����" << endl;
                LinkNode *head = in_outstream(filename);
                if (head == nullptr) {
                    continue;
                }
                LinkNode *current = head;
                m = Huffumancode(p, HC, current);
                cout << "������Ҫѹ�������ļ���·��" << endl;
                cin.sync();
                cin.getline(filename1, 100);
//                strcpy(filename1,"C:\\Users\\Zhenglin Li\\Desktop\\FileRecv");
                write_message(m, p, head, HC, filename, filename1);
            }
            cin.sync();
        } else if (choice == 2) {
            cout << "������ѹ���ļ�·��(.txt��β)" << endl;
            cin.sync();
            cin.getline(filename4, 100);
//            strcpy(filename4,"C:\\Users\\Zhenglin Li\\Desktop\\FileRecv\\Only0And1.txt");
            cout << filename4 << endl;
            cout << "�����������ļ�·��(.txt��β)" << endl;
            cin.sync();
            cin.getline(filename3, 100);
//            strcpy(filename3,"C:\\Users\\Zhenglin Li\\Desktop\\FileRecv\\config.txt");
            cout << filename3 << endl;
            cout << "�������ѹ����ļ�·��" << endl;
            cin.sync();
            cin.getline(filename2, 100);
//            strcpy(filename2,"C:\\Users\\Zhenglin Li\\Desktop\\FileRecv\\uncompressed.txt");
            cout << filename2 << endl;
            HuffTree<char> *p = rebuild(filename3);
            UnCompress(p, filename4, filename2);    //����������
            cin.sync();
        } else {
            cout << "��������, ������" << endl;
            cin.sync();
        }
    }
    cout << "�˳�����" << endl;
    return 0;
}

int printMenu() {
    int choice;
    cout << "        |-------------------------------------|" << endl;
    cout << "        |           �������������              |" << endl;
    cout << "        |                                     |" << endl;
    cout << "        |     1: ʹ�ù���������ѹ���ļ�(.txt)    |" << endl;
    cout << "        |     2: ���չ����������ѹ�ļ�(.txt)    |" << endl;
    cout << "        |     0: �˳�����                      |" << endl;
    cout << "        |                                     |" << endl;
    cout << "        |-------------------------------------|" << endl;
    cout << "        ����������ѡ��: " << endl;
    cin >> choice;
    return choice;
}

bool checkFileName(char *name, int type) {
    int length = 0;
    for (int i = 0;; i++) {
        if (name[i] == '\0') {
            length = i;
            break;
        }
    }
    if (length <= 4) {
        return false;
    }
    switch (type) {
        case 1: {
            if (name[length - 1] != 't' || name[length - 2] != 'x' || name[length - 3] != 't' ||
                name[length - 4] != '.') {
                cout << "�ļ���������" << endl;
                return false;
            }
            break;
        }
        case 2: {
            if (name[length - 1] != 'f' || name[length - 2] != 'u' || name[length - 3] != 'h' ||
                name[length - 4] != '.') {
                cout << "�ļ���������" << endl;
                return false;
            }
            break;
        }
    }

    return true;
}