use std::io::{self, Write};

fn linear_search(arr: &[i32], size: usize, search_element: i32) -> i32 {
    for i in 0..size {
        if arr[i] == search_element {
            return i as i32;
        }
    }
    -1
}
fn main() {
    let arr = [
        3, 4, 6, 7, 8, 9, 10, 14, 15, 17, 20, 23, 24, 25, 26, 27, 28, 30, 31, 32, 33, 34, 38, 39,
        40, 41, 42, 43, 46, 47, 48, 49, 51, 54, 55, 56, 57, 59, 61, 63, 64, 65, 66, 68, 69, 70, 75,
        76, 78, 80, 81, 83, 84, 85, 86, 89, 90, 91, 93, 94, 95, 96, 98, 99,
    ];

    print!("Enter the number: ");
    io::stdout().flush().unwrap();
    let mut user_input: String = String::new();
    io::stdin()
        .read_line(&mut user_input)
        .expect("Failed to read input");
    let user_input: i32 = match user_input.trim().parse() {
        Ok(num) => num,
        _ => return,
    };

    let res = linear_search(&arr, arr.len(), user_input);
    if res == -1 {
        println!("Element not found in the array");
    } else {
        println!("Element found at the position {res}");
    }
}
