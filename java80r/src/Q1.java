import java.sql.Array;
import java.util.Arrays;
import java.util.Scanner;

public class Q1 {
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
        System.out.println("������target");
        int target = sc.nextInt();
        int[] res=function(array,target);
        System.out.println(Arrays.toString(res));
    }
    public static int[] function(int[] nums,int target){
        for (int i=0;i<nums.length-1;i++){
            for(int j=i+1;j<nums.length;j++){
                if (nums[i]+nums[j]==target){
                    return new int[]{i, j};
                }
            }
        }
        return null;
    }
}
