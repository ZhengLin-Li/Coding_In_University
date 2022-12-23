import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Q3 {
    public static class Node {
        public int data;
        public Node next;

        public Node(int data) {
            this.data = data;
        }
    }

    public static Object[] getInput(int i) {
        System.out.println("����������" + i + "��ÿһ���ڵ��ֵ���ö��Ÿ�����");
        Scanner sc = new Scanner(System.in);
        String str = sc.next().toString();
        String[] arr = str.split(",");
        int[] array = new int[arr.length];
        for (int j = 0; j < array.length; j++) {
            array[j] = Integer.parseInt(arr[j]);
        }
        System.out.println("�������£�" + Arrays.toString(array));
        Object[] res = new Object[arr.length];
        for (int j = 0; j < array.length; j++) {
            res[j] = array[j];
        }
        return res;
    }
    public static Node arrayToNode1(Object[] arr) {
        Node head = new Node((Integer) arr[0]); // ������ĵ�һ��λ�ö���Ϊͷ���
        Node other = head; // һ��ָ�룬��ʱָ��ͷ���
        for (int i = 1; i < arr.length; i++) { //ͷ����Ѿ����壬��1��ʼ
            Node temp = new Node( (Integer) arr[i]);
            other.next = temp;
            other = other.next;

        }//�ڴ˴���ӡ������׵���head�ı仯
        return head;
    }
    public static void main(String[] args) {
        Node head1=arrayToNode1(getInput(1));
        Node head2=arrayToNode1(getInput(2));

        Node res = function3(head1, head2);
        Node temp = res;
        while (temp != null) {
            System.out.print(temp.data + "  ");
            temp = temp.next;
        }
    }



    public static Node function3(Node head1, Node head2) {
        int i = 1;
        int value1 = 0;
        Node temp = head1;
        while (temp != null) {
            value1 += temp.data * i;
            i *= 10;
            temp = temp.next;
        }
        i = 1;
        temp = head2;
        int value2 = 0;
        while (temp != null) {
            value2 += temp.data * i;
            i *= 10;
            temp = temp.next;
        }
        System.out.println(value1 + " " + value2);
        int value = value1 + value2;
        ArrayList<Integer> arrayList = new ArrayList<>();
        while (value != 0) {
            arrayList.add(value % 10);
            value /= 10;
        }
        System.out.println(arrayList.toString());

        return arrayToNode1(arrayList.toArray());
    }
}
