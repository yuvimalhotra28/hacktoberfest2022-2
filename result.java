import java.util.Scanner;
class ABC 
{
		protected  
			int roll,m1,m2,m3;
			double  per ,total;
			String Name;
		public 
		void getData()
		{
				Scanner sc = new Scanner(System.in);
				System.out.print("enter roll numbber : ");
				roll = sc.nextInt();
				System.out.print("enter name :");
				Name = sc.nextLine();
				System.out.print("enter C mark  : ");
				m1 = sc.nextInt();
				System.out.print("enter C++ mark  : ");
				m2 = sc.nextInt();
				System.out.print("enter Java mark  : ");
				m3 = sc.nextInt();
		}
		void printData()
		{
				System.out.println("\n\n__________________________________\n\n");
				System.out.println("Roll number : " + roll);
				System.out.println("Name is : " + Name);
				System.out.println("C lanuage mark is : " + m1);
				System.out.println("C++ Language mark is :" + m2);
				System.out.println("Java mark is : " + m3);
				total = m1+m2+m3;
				per = total/3;
				System.out.println("total  mark is : " + total);
				System.out.println("pertange is : " + String.format("%.2f",per));
		}			
}
class Student
{
	public static void main(String a[])
	{
		ABC s1=new ABC();
        s1.getData();
        s1.printData();
	
		
		
	}
	
}
