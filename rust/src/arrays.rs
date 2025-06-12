use crate::utils::input_arr_int;

pub fn main() {
    subarray_with_zero_sum();
}

fn subarray_with_zero_sum() {
    // 3, 4, -1, 3, 1, 3, 1, -4, -2
    // 3  7   6  9  10  13 14 10 found again, means there is subarray which has sum 0
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).unwrap();
    let arr:Vec<i32> = buffer.trim().split_whitespace()
        .map(|x| x.parse().unwrap()).collect();

    let mut exists: std::collections::HashMap<i32, bool> = std::collections::HashMap::new();
    let mut sum_so_far = 0;
    for x in arr {
        sum_so_far += x;
        if exists.contains_key(&sum_so_far) && exists[&sum_so_far] {
            println!("There exists a sub-array with sum 0");
            return;
        } else {
            exists.insert(sum_so_far, true);
        }
    }

    println!("There is no sub-array with sum 0");
}

fn pair_with_given_sum() {
    let mut arr = input_arr_int();
    let target = crate::utils::input_int();

    arr.sort();
    println!("Array = {:?}", arr);

    let (mut start, mut end) = (0, arr.len()-1);
    while start < end {
        if arr[start] + arr[end] < target {
            start += 1;
        } else if  arr[start] + arr[end] > target {
            end -= 1;
        } else { break };
    }

    if start >= end {
        println!("-1, -1");
    } else {
        println!("{start}, {end}");
    }
}
