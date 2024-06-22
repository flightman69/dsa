use std::io::{self, Write};
fn main() {
    let arr = [
        1, 5, 6, 7, 9, 10, 11, 12, 16, 21, 23, 24, 26, 27, 28, 29, 30, 32, 34, 35, 36, 37, 38, 40,
        41, 43, 44, 45, 47, 49, 50, 54, 55, 56, 57, 61, 62, 65, 66, 67, 68, 69, 71, 72, 74, 77, 78,
        79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100,
    ];

    let mut scanner = String::new();
    print!("Enter the number: ");
    io::stdout().flush().unwrap();
    io::stdin()
        .read_line(&mut scanner)
        .expect("Failed to read input");

    let search_element: i32 = match scanner.trim().parse() {
        Ok(num) => num,
        _ => return,
    };
    let high = arr.len() - 1;
    match binary_search(&arr, 0 as usize, high, search_element) {
        Some(res) => println!("Element found at {res}"),
        None => println!("Element not found"),
    }
}

fn binary_search(arr: &[i32], low: usize, high: usize, search_element: i32) -> Option<usize> {
    if high >= low {
        let mid = (low + (high - low) / 2) as usize;

        if search_element == arr[mid] {
            return Some(mid);
        }

        if search_element < arr[mid] {
            return binary_search(arr, low, mid - 1, search_element);
        }

        if search_element > arr[mid] {
            return binary_search(arr, mid + 1, high, search_element);
        }
    }

    None
}
