import java.lang.annotation.Repeatable;
import java.util.Arrays;
import java.util.Scanner;

public class first{
    static int logic(int x,int y){
        int z;
        if(x>y){
            z=(x*y);
        }
        else{
            z=(x*y)+5;
        }
        return z;
    }

    static int sum(int ...arr){
        int sum=0;
        for(int a:arr){
            sum+=a;
        }
        return sum;
    }

    public static void main(String[] args) {
        // String name1="Shivansh";
        // String name2="Jha";
        // String name3=name1+name2;
        // String name4=name1+" "+name2;
        // System.out.println(name3);
        // System.out.println(name4);
        // System.out.println(name1.charAt(5));
        // System.out.println(name1.length());
        // String name5=name1.replace('s', 'a');
        // System.out.println(name5);
        // System.out.println(name1.substring(0,4));

        // int[] marks=new int[3];
        // marks[0]=97;
        // marks[1]=94;
        // marks[2]=96;
        // int[] marks={97,94,96}
        // System.out.println(marks[0]);

        // Arrays.sort(marks);
        // System.out.println(marks[0]);
        // int[][] finalMarks={{97,95,96},{95,95,98}};
        // System.out.println(finalMarks[0][2]);

        //Constants
        // final float PI=3.14F;
        // PI=1.4F;
        // System.out.println(PI);

        //Math Class
        // int a=5,b=6;
        // System.out.println(Math.max(a, b));
        // System.out.println(Math.min(a, b));
        // System.out.println((int)(Math.random()*100));

        //Taking Input
        // Scanner sc=new Scanner(System.in);
        // System.out.println("Enter your age:");
        // int age=sc.nextInt();
        // System.out.println(age);
        // float age=sc.nextFloat();
        // System.out.println(age);
        // System.out.println("Enter your name:");
        // String name=sc.next();
        // System.out.println(name);
        // String name=sc.nextLine();
        // System.out.println(name);

        //Conditional Statements
        // Scanner sc=new Scanner(System.in);
        // System.out.println("Input your age:");
        // int age=sc.nextInt();
        // if(age>=18){
        //     System.out.println("Can Vote");
        // }
        // else{
        //     System.out.println("Can't Vote");
        // } 
        
        //Switch Statements
        // Scanner sc=new Scanner(System.in);
        // System.out.println("Enter from 1 to 7:");
        // int day=sc.nextInt();
        // switch(day){
        //     case 1:
        //         System.out.println("Monday");
        //         break;
        //     case 2:
        //         System.out.println("Tuesday");
        //         break;
        //     default:
        //         System.out.println("Wed-Sun");
        // }

        //LOOPS
        // for(int i=100;i>=1;i--){
        //     System.out.println(i);
        // }

        // int j=100;
        // while(j>=1){
        //     System.out.println(j);
        //     j--;
        // }
        
        // int k=100;
        // do{
        //     System.out.println(k);
        //     k--;
        // }while(k>=1);

        //println next line mai aa jayega
        //print same line mai aa jayega

        //Methods
        int a=5;
        int b=7;
        int c=logic(a,b);
        System.out.println(c);

        System.out.println("The sum of 4 and 5 is " +sum(4,5));
        System.out.println("The sum of 4,5 and 6 is "+sum(4,5,6));
        System.out.println("The sum of 4,5,6 and 7 is "+sum(4,5,6,7));
    }
}