import java.util.*;

class Program267
{
    public static boolean ChkBit(int iNo)
    {
        int iMask = 64536;  
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
            System.out.println("17th bit is ON");
        }
        else
        {
            System.out.println("17th bit is OFF");
        }
    }
}

/*

Input     1  1  0  1  0  0  0  1
Mask      0  0  0  0  0  1  0  0
0     &
-----------------------------------------------
Result     0  0  0  0  0  0  0   0


Input     1  0  0  0  1  1  1  1
Mask      0  0  0  0  0  1  0  0
0     &
-----------------------------------------------
Result     0  0  0  0  0  1  0   0

*/

//  00000000  00000000  01000000  01000000

//  64 + 16384
