class NormalCar {
    String car, color;
    int wheels, weight, engine, price;
    //Null constructor
    public NormalCar(){
        car = "";
        color = "";
        wheels = 0;
        weight = 0;
        engine = 0;
        price = 0;
    }
    //Parameterized constructor
    public NormalCar(String car, String color, int wheels, int weight, int engine, int price){
        this.car = car;
        this.color = color;
        this.wheels = wheels;
        this.weight = weight;
        this.engine = engine;
        this.price = price;
    }
    //Copy constructor
    public NormalCar(NormalCar copy){
        this.car = copy.car;
        this.color = copy.color;
        this.wheels = copy.wheels;
        this.weight = copy.weight;
        this.engine = copy.engine;
        this.price = copy.price;
    }
    //Getter
    void getCar(){
        System.out.println("Car: " + car);
        System.out.println("Color: " + color);
        System.out.println("Wheels: " + wheels);
        System.out.println("Weight: " + weight);
        System.out.println("Engine: " + engine);
        System.out.println("Price: " + price);
    }
    //Setter
    void setCar(String car, String color, int wheels, int weight, int engine, int price){
        this.car = car;
        this.color = color;
        this.wheels = wheels;
        this.weight = weight;
        this.engine = engine;
        this.price = price;
    }
    //Display
    void display(){
        System.out.println("Car: " + car);
        System.out.println("Color: " + color);
        System.out.println("Wheels: " + wheels);
        System.out.println("Weight: " + weight);
        System.out.println("Engine: " + engine);
        System.out.println("Price: " + price);
    } 
}