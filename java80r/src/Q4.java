import java.util.Arrays;
import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        System.out.println("���������鲢�ö��Ÿ�����");
        Scanner sc = new Scanner(System.in);
        String str = sc.next().toString();
        String[] arr  = str.split(",");
        int[] array = new int[arr.length];
        for(int j = 0; j<array.length;j++) {
            array[j] = Integer.parseInt(arr[j]);
        }
        System.out.println("�������£�"+Arrays.toString(array));
        System.out.println(Arrays.toString(function4(array)));
    }

    public static int[] function4(int[] nums) {
        int[] res = new int[nums.length];
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
            res[i] = sum;
        }
        return res;
    }
}
