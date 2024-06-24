fn main() {
    println!("[Find Missing Element]\nTime Comp: O(N)");
    let arr = [1, 3, 7, 5, 6, 2];
    let missing = find_missing(&arr);
    println!("The missing number is {}", missing);
}

fn find_missing(arr: &[i32]) -> i32 {
    let mut sum = 0;
    let mut largest = arr[0];
    for (_, &val) in arr.iter().enumerate() {
        if largest < val {
            largest = val;
        }
        sum += val;
    }
    (largest * (largest + 1) / 2) - sum
}
