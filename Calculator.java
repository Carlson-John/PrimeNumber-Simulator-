package Prime_Number;

public class Calculator {

	public static void main(String[] args) {
		int n=0;
		int num =0;
		String primeNumbers = "";
		
		
		for (n = 2; n <= 1000; n++)
		{
			
			int counter =0;
			for(num =n-1; num >=2; num--)
			{
				if(n%num==0)
				{
					counter = counter +1;
					
				}
			}
			if (counter ==0)
			{
				primeNumbers = primeNumbers + n + " ";
				
			}
		}
		
		System.out.println("Prime numbers from 2 to 1000:");
		System.out.println(primeNumbers);

	}

}
