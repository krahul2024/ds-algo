use crate::utils::input_arr_int;

pub fn main() {
    pair_with_given_sum();
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
