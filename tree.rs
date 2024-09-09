fn main() {
    println!("Hello, world!");
}

fn test(data: &Integer) {
    println!("The value of data is {}", data);
}

fn main() {
    let x = 5;
    test(x);
}