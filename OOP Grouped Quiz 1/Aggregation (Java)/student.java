public class student{
    String name;
    String bookname;

    public student(){}
    public student(String string,String Bookname){
        this.name=string;
        this.bookname=Bookname;

    }
    public student(student diffrent){
        name=diffrent.name;
        bookname=diffrent.bookname;

    }
     
   
    public void show(){
        System.out.println("name of student is:"+name+"\n"+"name of book issued is:"+bookname);
    }
}