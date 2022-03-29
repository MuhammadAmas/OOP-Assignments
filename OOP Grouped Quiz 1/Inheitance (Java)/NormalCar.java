class NormalCar {
    private String car, color;
    private int wheels, weight, engine, price;
    public NormalCar() {
        car = "";
        color = "";
        wheels = 0;
        weight = 0;
        engine = 0;
        price = 0;
    }
    public NormalCar(String car, String color, int wheels, int weight, int engine, int price){
        this.car = car;
        this.color = color;
        this.wheels = wheels;
        this.weight = weight;
        this.engine = engine;
        this.price = price;
    }
    public NormalCar(NormalCar obj){
        this.car = obj.car;
        this.color = obj.color;
        this.wheels = obj.wheels;
        this.weight = obj.weight;
        this.engine = obj.engine;
        this.price = obj.price;
    }
    public String getCar(){
        return this.car;
    }
    public String getColor(){
        return this.color;
    }
    public int getWheels(){
        return this.wheels;
    }
    public int getWeight(){
        return this.weight;
    }
    public int getEngine(){
        return this.engine;
    }
    public int getPrice(){
        return this.price;
    }
    void display1(){
        System.out.println("Car: " + car);
        System.out.println("Color: " + color);
        System.out.println("Wheels: " + wheels);
        System.out.println("Weight: " + weight);
        System.out.println("Engine: " + engine);
        System.out.println("Price: " + price);
    } 
}