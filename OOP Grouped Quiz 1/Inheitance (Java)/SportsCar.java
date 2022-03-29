class SportsCar extends NormalCar{
    private String edition,safeguard;
    private int passengerSpace;

    public SportsCar() {
        super();
        edition = "";
        safeguard = "";
        passengerSpace = 0;
    }
    public SportsCar(String car, String color, int wheels, int weight, int engine, int price, String edition, String safeguard, int passengerSpace){
        super(car, color, wheels, weight, engine, price);
        this.edition = edition;
        this.safeguard = safeguard;
        this.passengerSpace = passengerSpace;
    }
    public SportsCar(SportsCar obj){
        super(obj);
        this.edition = obj.edition;
        this.safeguard = obj.safeguard;
        this.passengerSpace = obj.passengerSpace;
    }
    public int getPassengerSpace(){
        return this.passengerSpace;
    }
    public String getEdition(){
        return this.edition;
    }
    public String getSafeguard(){
        return this.safeguard;
    }
    void display2(){
        System.out.println("Edition: " + edition);
        System.out.println("Safeguard: " + safeguard);
        System.out.println("Passenger Space: " + passengerSpace);
    }
}