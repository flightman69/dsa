fn main() {
    let arr = [12, 13, 1, 10, 34, 1];
    print_3_largest(&arr);
}

fn print_3_largest(arr: &[i32]) {
    let size = arr.len();
    if size < 3 {
        println!("Invalid Array");
        return;
    }
    let mut first = arr[0];
    let mut second = arr[0];
    let mut third = arr[0];
    for (_index, &val) in arr.iter().enumerate() {
        if first < val {
            third = second;
            second = first;
            first = val;
        } else if second < val {
            third = second;
            second = val;
        } else if third < val {
            third = val;
        }
    }

    println!("{} {} {}", first, second, third);
}
