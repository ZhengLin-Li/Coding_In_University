#include <iostream>
#include "LStack.h"
#include "getInput.h"
#include "optr.h"
#include <string>
#include <cmath>

using namespace std;

//���ʽ���㺯�����ѱ��ʽ���룬���ص��Ǽ��������ֵ
double getResult(char[]);

//�������㺯���������������Ͳ����������ؼ��������ֵ
double whichOptr(double, double, char);

//��ӡ�˵�
void printMenu();

//�ж��Ƿ�Ϊ����
bool isdigit(char);

//������
int main() {
    //��ӡ�˵�
    printMenu();
    //�õ��Ϸ��ı��ʽ
    char *expression = getExpression();
    if (expression == nullptr) {
        cout << "expression is NULL" << endl;
    } else {
        //��ʼ���㣬���õ����
        double result = getResult(expression);
        //������
        cout << "Result: " << result << endl;
    }
    return 0;
}

//��ӡ�˵�
void printMenu() {
    cout << "*******************************Caculate1.0*******************************" << endl;
    cout << "ʹ��˵����" << endl;
    cout << "���ʽ�ɰ�����" << endl;
    cout << "1.�ӣ�+��������-�����ˣ�*��������/������ģ��%����������&�����˷���^��" << endl;
    cout << "2.����" << endl;
    cout << endl;
    cout << "��������ʽ<�ԵȺš�=������>��" << endl;
    cout << "" << endl;
}

//�ж��Ƿ�Ϊ����
bool isdigit(char ch) {
    //���ŵ�д��
    return ch >= '0' && ch <= '9';
}

//���ʽ���㺯�����ѱ��ʽ���룬���ص��Ǽ��������ֵ
double getResult(char *in) {
    //�½�����ջ
    auto *optr = new LStack<char>;
    auto *opnd = new LStack<double>;
    //�ѵ��ں�push�������ջ���ж��Ƿ�������
    optr->push('=');
    //var�����ж��Ƿ�����λ�����ϵ�����
    int var = 0;
    //�����ж���������һ���������������ֵ����
    int te = 0;
    //��ʼ����
    for (int i = 0; !((in[i] == '\0') && (optr->topValue() == '=')); i++) {
        // cout << "���ڴ���" << in[i] << endl;
        //������������
        while (in[i] == '\0' && optr->topValue() != '=') {
            double numberA = opnd->pop();
            double numberB = opnd->pop();
//            cout << "(numberA)" << (numberA) << "(numberB)" << numberB << endl;
            double temp = whichOptr(numberB, numberA, optr->pop());
            opnd->push(temp);
        }
        //���������
        if (isdigit(in[i])) {
            //��te==1��˵��ǰһ�����������ţ������ѭ����ֵΪ����ʱ�������㣬��ʾû�����븺�������1*��-3��
            if (te == 1) {
                te = 0;
            }
            double t = in[i] - '0';
            if (var != 0) {
                double numberC = opnd->pop();
                double numberD = t;
                double temp = whichOptr(10 * numberC, numberD, '+');
                opnd->push(temp);
            } else {
                var++;
                opnd->push(t);
            }
            //�ж�С����
        } else if (in[i] == '.') {
            //�����С���㣬�����������ƶ�һλ��*0.1�ӵ������
            int powNum = 1;
            double numberE = opnd->pop();
            double numberF = in[++i] - '0';
            double temp = numberE + numberF * pow(0.1, powNum++);
            opnd->push(temp);
            //�����С����������ֻ������ֵĻ�������������˳�ƶ�һλ��*0.1�ӵ������
            while (isdigit(in[i + 1])) {
                numberE = opnd->pop();
                numberF = in[++i] - '0';
                temp = numberE + numberF * pow(0.1, powNum++);
                opnd->push(temp);
            }
        } else if (in[i] != '\0') { //������һ�β������֣���var���ڳ�ʼ��
            var = 0;
            //��ʶ���������ŵ����
            if (in[i] == '(') {
                te = 1;
            }
            if (optr_level_in(optr->topValue()) < optr_level_out(in[i])) {  //���ջ�����ȼ�С��ջ�����ȼ�
                optr->push(in[i]);
                //����������push 0
                //
                if (in[i] == '-' && te == 1 ){
                    opnd->push(0);
                }

            } else if (optr_level_in(optr->topValue()) > optr_level_out(in[i])) {
                double numberA = opnd->pop();
                double numberB = opnd->pop();
//                cout << "(numberA)" << (numberA) << "(numberB)" << numberB << endl;
//
                double temp = whichOptr(numberB, numberA, optr->pop());
                opnd->push(temp);
                i--;
            } else {
                optr->pop();
            }
        }
    }
    //���ؽ��
    return opnd->topValue();
}

//�������㺯���������������Ͳ����������ؼ��������ֵ
double whichOptr(double a, double b, char optr) {
    if (optr == '+') {
//        cout << a << optr << b << endl;
        return a + b;
    }
    if (optr == '-') {
//        cout << a << optr << b << endl;
        return a - b;
    }
    if (optr == '*') {
//        cout << a << optr << b << endl;
        return a * b;
    }
    if (optr == '/') {
        //��������Ϊ0
        if (b == 0) {
            cout << "error" << endl;//�жϳ���Ϊ��
        }
//        cout << a << optr << b << endl;
        else {
            return a / b;
        }
    }
    if (optr == '%') {
//        cout << a << optr << b << endl;
        return (int) a % (int) b;//
    }
    if (optr == '^') {
//        cout << a << optr << b << endl;
        return pow(a, b);
    }
    if (optr == '&') {
        //���������ļ��㷽��
        return pow(a, 1.0 / b);
    }
    return 0.0;
}

