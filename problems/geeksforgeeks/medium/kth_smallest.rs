fn kth_smallest(arr: &mut [i32], k: usize) -> i32 {
    arr.sort();
    arr[k - 1]
}
fn main() {
    let mut arr = [7, 10, 4, 20, 15];
    let k = 4;

    let res = kth_smallest(&mut arr, k);
    println!("The {}th smallest is {}", k, res);
}
