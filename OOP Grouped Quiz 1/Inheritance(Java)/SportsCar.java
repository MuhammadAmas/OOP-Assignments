class SportsCar extends NormalCar{
    String edition,safeguard;
    int passengerSpace;
    //Null constructor
    public SportsCar(){
        edition = "";
        safeguard = "";
        passengerSpace = 0;
    }
    //Parameterized constructor
    SportsCar(String car, String color, int wheels, int weight, int engine, int price, String edition, String safeguard, int passengerSpace){
        super(car, color, wheels, weight, engine, price);
        this.edition = edition;
        this.safeguard = safeguard;
        this.passengerSpace = passengerSpace;
    }
    //Copy constructor
    SportsCar(SportsCar copy){
        super(copy);
        this.edition = copy.edition;
        this.safeguard = copy.safeguard;
        this.passengerSpace = copy.passengerSpace;
    }
    //Getter
    void getSportsCar(){
        System.out.println("Edition: " + edition);
        System.out.println("Safeguard: " + safeguard);
        System.out.println("Passenger Space: " + passengerSpace);
    }
    //Setter
    void setSportsCar(String edition, String safeguard, int passengerSpace){
        this.edition = edition;
        this.safeguard = safeguard;
        this.passengerSpace = passengerSpace;
    }
    //Display
    void display(){
        System.out.println("Edition: " + edition);
        System.out.println("Safeguard: " + safeguard);
        System.out.println("Passenger Space: " + passengerSpace);
    }
}