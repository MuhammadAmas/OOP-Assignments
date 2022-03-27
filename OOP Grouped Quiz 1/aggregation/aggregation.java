public class aggregation{
   public static void main(String[] args) {
   
  
   
      libarary l1 = new libarary();
      
      
      libarary l2 = new libarary("depart libarary","department of computer science UBIT","second floor","33");
      l2.show();
      
      libarary l3 = new libarary(l2);
      

      student s1=new student();
      
       
     student s2 = new student("jannat" , "calculus");
     s2.show();
       
     student s3 = new student(s2);
    
       
   }
   
}

   
