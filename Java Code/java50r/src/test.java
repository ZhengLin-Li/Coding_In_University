import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        ScoreListMange scoreListMange = new ScoreListMange();
        ScoreList one = new ScoreList("����", 123, "19���������ѧ����", 60.0, 90.6);
        ScoreList two = new ScoreList("����", 456, "19�����Ͽ�ѧʮһ��", 75.6, 49.6);
        ScoreList three = new ScoreList("��˾ƥ��", 159, "20����Ժһ��", 85.6, 76.2);
        ScoreList four = new ScoreList("������", 852, "21���������ѧ����", 99.0, 86.9);
        scoreListMange.add(one);
        scoreListMange.add(two);
        scoreListMange.add(three);
        scoreListMange.add(four);
        Scanner scanner = new Scanner(System.in);
        int choice = 0;
        while (true) {
            System.out.println();
            System.out.println();
            System.out.println("============================");
            System.out.println("���ǳɼ�������ϵͳ");
            System.out.println("1--�鿴ȫ����ƽ����");
            System.out.println("2--�鿴������������");
            System.out.println("3--�ҵ�ĳ��ѧ��");
            System.out.println("4--�ҵ���߷�");
            System.out.println("else--Quit");
            System.out.println("============================");
            choice = scanner.nextInt();
            if (choice == 1) {
                System.out.println("�༶��ƽ������"+scoreListMange.getAverage());
                choice = 0;
            } else if (choice == 2) {
                System.out.println(scoreListMange.numberOfEveryScore());
                choice = 0;
            } else if (choice == 3) {
                System.out.println("������ѧ��ѧ��");
                System.out.println(scoreListMange.getStudentById(scanner.nextInt()));
                choice = 0;
            } else if (choice == 4) {
                System.out.println("��߷ֵ�ѧ����"+scoreListMange.getHighest());
                choice = 0;
            } else {
                System.out.println("Quit");
                break;
            }
        }
    }
}
