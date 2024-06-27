use std::collections::HashMap;

struct Solution {}

impl Solution {
    fn get_pairs(self, arr: &[i32], k: i32) -> Option<i32> {
        let mut pairs = 0;
        let mut mymap: HashMap<i32, i32> = HashMap::new();
        for &val in arr {
            *mymap.entry(val).or_insert(0) += 1;
        }

        for &i in arr {
            let x = k - i;
            if let Some(&count) = mymap.get(&x) {
                pairs += count;
            }

            if x == i {
                pairs -= 1;
            }
        }
        pairs /= 2;
        if pairs > 0 {
            Some(pairs)
        } else {
            None
        }
    }
}

fn main() {
    let arr = [1, 5, 7, 1];

    let obj: Solution = Solution {};

    if let Some(res) = obj.get_pairs(&arr, 6) {
        println!("Result: {}", res);
    } else {
        println!("Nothing found");
    }
    println!("Counting Pairs with a Given Sum");
    println!("Time Complexity: O(n)");
    println!("Space Complexity: O(n)");
}
