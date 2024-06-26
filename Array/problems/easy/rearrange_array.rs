fn rearrange(arr: &[i32]) {
    let size = arr.len() as i32;
    let mut arr2 = [-1; 100];
    for &val in arr.iter() {
        if val >= 0 && val < size {
            arr2[val as usize] = val;
        }
    }

    for i in 0..size {
        print!("{} ", arr2[i as usize]);
    }
    println!();
}

fn main() {
    println!("[Rearrange array arr[i] = i]\nTime Comp: O(N)");

    let arr = [
        -1, 55, 0, 43, -1, 86, 53, 18, 20, -1, 58, 52, 90, 28, -1, 10, 45, 1, 89, 25, 77, -1, -1,
        15, 5, -1, 36, 17, 11, 12, -1, 95, -1, 91, 33, 6, 50, 54, 22, 68, -1, 98, 38, 34, -1, -1,
        -1, 87, 24, 14, 7, 37, 49, -1, 4, 76, 62, -1, 23, 59, 66, 13, 19, 75, 88, -1, -1, 96, 97,
        -1, 35, 65, 74, 31, 72, 46, -1, 61, 26, 40, 41, 29, -1, -1, 2, 81, -1, 82, -1, 69, -1, 67,
        80, -1, 47, 84, 8, 83, 42,
    ];

    rearrange(&arr);
}
