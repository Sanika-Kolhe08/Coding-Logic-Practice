import java.util.Scanner;

class NumberX {
    public void DisplayFactors(int iNo)
    {
        for(int iCnt = 1; iCnt<=(iNo/2); iCnt++)           //optimise the code
        {
            if((iNo%iCnt)==0)
            {
                System.out.println(iCnt);
            }
        }
    }
}
class program47 {
  
    public static void main(String A[])
    {
       Scanner sobj = new Scanner(System.in);

       int iValue = 0;

       System.out.println("Enter number :");
       iValue =sobj.nextInt();

       System.out.println("Factors are :");
       NumberX nobj = new NumberX();

       nobj.DisplayFactors(iValue);

       sobj.close();
      
    }
}
//Time complexity : O(n/2)
//where n >= 0
//Where O  is for Order of