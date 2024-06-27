fn three_sum(vec: Vec<i32>) -> Option<Vec<Vec<i32>>> {
    let mut vec = vec;
    vec.sort();
    let mut vik: Vec<Vec<i32>> = Vec::new();
    for i in 0..vec.len() {
        if i > 0 && vec[i] == vec[i - 1] {
            continue;
        }

        let mut left = i + 1;
        let mut right = vec.len() - 1;

        while left < right {
            let sum = vec[i] + vec[left] + vec[right];
            if sum == 0 {
                vik.push(vec![vec[i], vec[left], vec[right]]);
                left += 1;
                right -= 1;

                while left < right && vec[left] == vec[left - 1] {
                    left += 1;
                }
                while left < right && vec[right] == vec[right - 1] {
                    right -= 1;
                }
            } else if sum < 0 {
                left += 1;
            } else {
                right -= 1;
            }
        }
    }

    if !vik.is_empty() {
        return Some(vik);
    }
    None
}
fn main() {
    let vec = vec![-1, 0, 1, 2, -1, -4];

    match three_sum(vec) {
        Some(res) => println!("{:?}", res),
        None => println!("No triplets found"),
    }
}
