// Customised Database Management System

class node
{
    private static int Counter = 1;
    public int Rno;
    public String Name;
    public String City;
    public int Marks;

    public node next;

    public node(String B, String C, int D)
    {
        Rno = Counter;
        Counter++;

        Name = B;
        City = C;
        Marks = D;
        next = null;
    }
}

class DBMS
{
    private node first;

    public DBMS()
    {
        first = null;
        System.out.println("DBMS inittailised successfully ...");
        System.out.println("Student Table gets created successfully...");
    }
    
    // InsertLast
    public void InsertIntoTable(String Name, String City, int Marks) 
    {
        node newn = new node(Name,City,Marks);
        
        if(first == null)
        {
            first = newn;
        }
        else
        {
            node temp = first;
            while(temp.next != null)
            {
               temp = temp.next;
            }
            temp.next = newn;
        }

        System.out.println("One record gets inserted successfully...");
    }

    // Display
    // select * from student
    public void SelectStarFrom()
    {
        System.out.println("Data from student table is : ");

        node temp = first;

        System.out.println("-------------------------------------------------------------");
        while(temp != null)
        {
            System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            temp = temp.next;
        }
        System.out.println("-------------------------------------------------------------");
    }

    // select * from student where city = ' ';
    public void SelectStarFromWhereCity(String str)
    {
        System.out.println("Data from student table where city is : "+str);

        node temp = first;

        System.out.println("-------------------------------------------------------------");
        while(temp != null)
        {
            if(str.equals(temp.City))
            {
                System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
                temp = temp.next;
            }
        }
        System.out.println("-------------------------------------------------------------");
    }
    
    // select Count from student;
    public void SelectCount()
    {
        node temp = first;
        int iCnt = 0;

        while(temp != null)
        {
            temp = temp.next;
            iCnt++;
        }

        System.out.println("Number of records in the table : "+iCnt);
    }

    // select Sum(Marks) from student;
    public void SelectSum()
    {
        node temp = first;
        int iSum = 0;

        while(temp != null)
        {
            iSum = iSum + temp.Marks;
            temp = temp.next;
        }

        System.out.println("Summation of marks column is : "+iSum);
    }

    // select Avg(Marks) from student;
    public void SelectAvg()
    {
        node temp = first;
        int iSum = 0;
        int iCnt = 0;

        while(temp != null)
        {
            iSum = iSum + temp.Marks;
            temp = temp.next;
            iCnt++;
        }

        System.out.println("Average of marks column is : "+iCnt);
    }

    // select Max(Marks) from student;
    public void SelectMax()
    {
        node temp = first;
        int iMax = 0;

        while(temp != null)
        {
            if(temp.Marks > iMax)
            {
                iMax = temp.Marks;
            }
            temp = temp.next;
        }

        System.out.println("Maximum of marks column is : "+iMax);
    }

    // select Min(Marks) from student;
    public void SelectMin()
    {
        node temp = first;
        int iMin = 0;

        while(temp != null)
        {
            if(temp.Marks < iMin)
            {
                iMin = temp.Marks;
            }
            temp = temp.next;
        }

        System.out.println("Minimum of marks column is : "+iMin);
    }

    // select * from student where name = " ";
    public void SelectStarFromName(String str)
    {
       node temp = first;

       System.out.println("Data from student table where name is : "+str);

       while(temp != null)
       {
           if(str.equals(temp.Name))
           {
               System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            }
            temp = temp.next;
        }
    }

    // update student set City = " " where Rno =  ;
    public void UpdateCity(int no, String str)
    {
        node temp = first;

        while(temp != null)
        {
            if(temp.Rno == no)
            {
                temp.City = str;
                break;
            }
            temp = temp.next;
        }

        System.out.println("Record gets updated...");
    }
}

class Program429
{
    public static void main(String Arg[])
    {
        DBMS obj = new DBMS();

        obj.InsertIntoTable("Amit","Pune",89);
        obj.InsertIntoTable("Pooja","Mumbai",95);
        obj.InsertIntoTable("Guari","Pune",90);
        obj.InsertIntoTable("Amit","Nagar",81);
        obj.InsertIntoTable("Rahul","Satara",80);
        obj.InsertIntoTable("Neha","Pune",78);

        obj.SelectStarFrom();

        obj.SelectStarFromWhereCity("Pune");

        obj.SelectCount();

        obj.SelectSum();

        obj.SelectAvg();

        obj.SelectMax();

        obj.SelectMin();

        obj.SelectStarFromName("Amit");

        obj.UpdateCity(3,"Nashik");

        obj.SelectStarFrom();
    }
}

/*
Supported Queries

1 : Insert student values('Amit','Pune', 78);
2 : Select * from student;
3 : select * from student where City = 'Pune';
4 :
5 : 
6 : 
7 :
8 :
9 : select * from student where name = " ";
10 : update student set City = " " where Rno =  ;
 */