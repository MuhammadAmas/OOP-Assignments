public class libarary {
    
    String name;
    String address;
    String floor;
    String room;
    public libarary(){

    }
    public libarary(String Name, String Address,String Floor,String Room) {
        this.name=Name;
        this.address=Address;
        this.floor=Floor;
        this.room=Room;
    }
    public libarary(libarary change){
        name=change.name;
        address=change.address;
        floor=change.floor;
        room=change.room;
    }
    public void show()
    {
        System.out.println("details of libarary are :"+"\n" +"name of libarary is:"+ name+"\n"+"address of libarary is:"+address+"\n"+"libarary is on :"+floor+"\n"+"libarary is at room number:"+room);
    }

    
}
