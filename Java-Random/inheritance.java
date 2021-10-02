class Parentclass {
    public void parentmethod() {
        System.out.println("This is parent class");
    }
}

class Childclass extends Parentclass {
    public void childmethod() {
        System.out.println("This is child class");
    }
}

class Inheritance {
    public static void main(String[] args){
        Parentclass obj1 = new Parentclass();
        Childclass obj2 = new Childclass();
        obj1.parentmethod();
        obj2.childmethod();
        obj2.parentmethod();
    }
}
