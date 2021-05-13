import java.util.Arrays;
import java.util.Scanner;

import static java.lang.Math.pow;

public class Q2 {
    public static class Node {
        public int data;
        public Node next;

        public Node(int data) {
            this.data = data;
        }
    }

    public static Node arrayToNode(int[] arr) {
        Node head = new Node(arr[0]); // ������ĵ�һ��λ�ö���Ϊͷ���
        Node other = head; // һ��ָ�룬��ʱָ��ͷ���
        for (int i = 1; i < arr.length; i++) { //ͷ����Ѿ����壬��1��ʼ
            Node temp = new Node(arr[i]);
            other.next = temp;
            other = other.next;

        }//�ڴ˴���ӡ������׵���head�ı仯
        return head;
    }

    public static int[] getInput() {
        System.out.println("���������������ÿһλ���ö��Ÿ�����");
        Scanner sc = new Scanner(System.in);
        String str = sc.next().toString();
        String[] arr = str.split(",");
        int[] array = new int[arr.length];
        for (int j = 0; j < array.length; j++) {
            array[j] = Integer.parseInt(arr[j]);
        }
        System.out.println("�����������£�" + Arrays.toString(array));
        return array;
    }

    public static void main(String[] args) {
        System.out.println(function2(arrayToNode(getInput())));
    }

    public static int function2(Node head) {
        int res = 0;
        Node temp = head;
        int length = 0;
        while (temp != null) {
            length++;
            temp = temp.next;
        }
        temp = head;
        while (temp != null) {
            if (temp.data == 1) {
                res += pow(2, length - 1);
            }
            length--;
            temp = temp.next;
        }
        return res;
    }
}
