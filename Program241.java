import java.util.*;

class Arithmatic
{
    public int Addition(int iValue1, int iValue2)
    {
        int iSum = 0;
        iSum = iValue1 + iValue2;
        return iSum;
    }
}

class Program241
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithmatic aobj = new Arithmatic();

        int iNo1 = 0, iNo2 = 0;
        int iAns = 0;

        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sobj.nextInt();

        iAns = aobj.Addition(iNo1, iNo2);
        System.out.println("Addition is : "+iAns);
    }
}