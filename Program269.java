import java.util.*;

class Program269
{
    public static boolean CheakBit(int iNo)
    {
        int iMask = 260;  
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
        
        bRet = CheakBit(iNo);

        if(bRet == true)
        {
            System.out.println("3rd & 9th bit is ON");
        }
        else
        {
            System.out.println("3rd & 9th bit is OFF");
        }
    }
}

/*

            0  0  0  0
            8  4  2  1

----------------------------------------------------------
Decimal     Binary      Hexadecimal
---------------------------------------------------------
0            0000         0
1            0001         1
2            0010         2
3            0011         3  
4            0100         4
5            0101         5
6            0110         6
7            0111         7 
8            1000         8 
9            1001         9 
10           1010         a
11           1011         b
12           1100         c
13           1011         d
14           1110         e
15           1111         f

*/