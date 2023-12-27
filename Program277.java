import java.util.*;

class Program277
{
    public static int OffBit(int iNo)
    {
        int iMask = 0x00020000;  // 18
        int iResult = 0;
        iResult = iNo & iMask;
        
        if(iResult == iMask)
        {
           return (iNo ^ iMask);    // 18th bit on
        }
        else
        {
            return iNo;     // 18th bit off
        }
    } 

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;
        
        System.out.println("Enter number : ");
        iNo = sobj.nextInt();
        
        iRet = OffBit(iNo);

        System.out.println("Updated number is : "+iRet);
    }
}