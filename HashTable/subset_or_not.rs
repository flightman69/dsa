use std::collections::HashSet;

fn is_subset(arr1: &[i32], arr2: &[i32]) -> bool {
    let hash_set: HashSet<i32> = arr1.iter().cloned().collect();

    for &i in arr2 {
        if !hash_set.contains(&i) {
            return false;
        }
    }
    true
}

fn main() {
    println!("[Find subset or not using hash set]");
    println!("Time Comp: \nInsertion: O(N)\nLookup: O(N)\nOverall: O(N+M)\n");
    let arr1 = [11, 1, 13, 21, 3, 7];
    let arr2 = [11, 3, 7, 1];

    if is_subset(&arr1, &arr2) {
        println!("arr2[] is a subset of arr1[]");
    } else {
        println!("arr2[] is not a subset of arr1[]");
    }
}
