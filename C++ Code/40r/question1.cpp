//
// Created by Zhenglin Li on 2021/1/16.
//

#include <cstring>
#include <iostream>

using namespace std;
/*
 * ������1����ֵ���������
 * ��Ŀ������Ϊ����CMyString����������Ϊ��������Ӹ�ֵ�����������
*/

class CMyString {
public:
    char *m_pData;
public:
    CMyString(char *pData = nullptr) {
        m_pData = pData;
    }

    CMyString(const CMyString &str) {
        delete[] m_pData;
        m_pData = str.m_pData;
    }

    ~CMyString() {
        delete[] m_pData;
    }

    CMyString& operator=(const CMyString& str){
        if(this==&str){
            return *this;
        }
        delete[] m_pData;
        m_pData =nullptr;
        m_pData = new char[strlen(str.m_pData)+1];
        strcpy(m_pData,str.m_pData);
        return *this;
    }
};

int main() {
    CMyString str="asd";
    CMyString str1="asds";
    str1=str;
    cout<< str.m_pData << endl;
    return 0;
}