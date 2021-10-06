import java.util.Scanner;
interface AdvancedArithmetic{
	int divisor_sum(int n); //public by default
}
class MyCalculator implements AdvancedArithmetic{
	@Override
	public int divisor_sum(int n) {
		int sum=0;
		for(int i=1;i<=n;i++) {
			if(n%i==0) {
				sum=sum+i;
			}
		}
		return sum;	
	}
}
public class DivisorSum {
     public static void main(String[] args) {
    	 AdvancedArithmetic maths;
    	 MyCalculator M=new MyCalculator();
    	 Scanner sc=new Scanner(System.in);
    	 maths=M;
    	 System.out.println("Enter the number under 1000 to find its sum of divisor");
    	 int n=sc.nextInt();
    	 if(n>1000) {
    		 System.out.println("The value of number exceeds 1000 can't proceed");
    	 }
    	 else
    	 {
    		 System.out.println("The sum of divisor for "+n+" is "+maths.divisor_sum(n));
    	 }
		

	}

}
