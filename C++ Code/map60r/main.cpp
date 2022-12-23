#include <iostream>
#include<fstream>
#include <map>

using namespace std;
typedef struct LNode {
    char key{};//�ַ�
    int number{};//Ȩֵ
    LNode *next = nullptr;
} LinkNode;

//����һ���½��
LinkNode *CreateNode() {
    auto *newNode = (LNode *) malloc(sizeof(LNode));
    if (newNode != nullptr) {
        newNode->key = '0';
        newNode->number = 0;
        newNode->next = nullptr;
    }
    return newNode;
}

//��ȡ�ļ�����Ϣ����������ͷָ��
LinkNode *in_outstream(char *fileName) {
    char c;
    bool flag;
    LinkNode *head = nullptr;//ͷָ��
    LinkNode *current = head;//��ǰ���
    ifstream in_stream;//Դ�ļ�
    in_stream.open(fileName);
    //��Դ�ļ�����
    if (in_stream.fail()) {
        cout << endl << "δ�ҵ��ļ�!!!" << endl << endl;
        return nullptr;
    }

    //�����ļ������ζ�ȡÿ���ַ�
    while (in_stream.get(c)) {
//        cout << c;
        flag = true;//��־c��������������
        //���������ж�c�Ƿ��Ѿ�������������
        for (current = head; current != nullptr; current = current->next) {
            //c�Ѿ����ڣ�c��Ӧ��Ƶ����1
            if (current->key == c) {
                current->number++;
                flag = false;//flag��Ϊfalse
                break;//����forѭ��
            }
        }
        //����������c�����ڣ��򴴽��½ڵ�
        if (flag) {
            LinkNode *newnode = CreateNode();
            newnode->key = c;
            newnode->number++;
            newnode->next = head;
            head = newnode;//����ͷָ������ǰ�ƶ������������Ҫһ��ͷָ��
        }
    }
    LinkNode *head1 = CreateNode();//����һ��ͷָ����ǰ��
    head1->next = head;
//    cout << endl<< "The result:" << endl;//����̨���

    //���������ֱ����������̨���ļ���
//    for (current = head; current != nullptr; current = current->next) {
//        cout << current->key << ' ' << current->number << '\n';
//    }

    //�ر���
    in_stream.close();

    return head1;//���ش����Ȩֵ���ַ�������ͷָ��
}

LinkNode *read() {
    char filename[100];
    cout << "�������ļ�·��(.txt��β)" << endl;
    cin.getline(filename, 100);
    LinkNode *head = in_outstream(filename);
    if (head == nullptr) {
        return nullptr;
    }
    return head;
}

int main() {
    LinkNode *head = read();
    map<char, int> myMap;
    cout << "LinkNode " << endl;
    for (LinkNode *current = head->next; current != nullptr; current = current->next) {
        cout << current->key << ' ' << current->number << '\n';
        myMap.insert(pair<char, int>(current->key, current->number));
    }
    cout << "myMap " << endl;
    for (auto &x: myMap) {
        cout << x.first << ": " << x.second << endl;
    }
    cout<<"�������ַ���:"<<endl;
    string s1;
    cin >> s1;
    cout<<s1<<"�ı�����:";
    for (char temp='a';temp<='z';temp++) {
        if(myMap.count(temp)>0){
            cout<<myMap[temp];
        }else{
            cout<<0;
        }
    }
    return 0;
}
