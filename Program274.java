import java.util.*;

class Program274
{
    public static boolean ChkBit(int iNo)
    {
        int iMask = 0x00000a00;  
        int iResult = 0;
        iResult = iNo & iMask;
        
        if(iResult == iMask)
        {
           return true;
        }
        else
        {
            return false;
        }
    } 

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;
        
        System.out.println("Enter number : ");
        iNo = sobj.nextInt();
        
        bRet = ChkBit(iNo);

        if(bRet == true)
        {
            System.out.println("10th & 12th bit is ON");
        }
        else
        {
            System.out.println("10th & 12th bit is OFF");
        }
    }
}