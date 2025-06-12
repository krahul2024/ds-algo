use std::isize;

pub fn input_arr_int() -> Vec<isize> {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).unwrap();

    let arr: Vec<isize> = buffer
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    return arr;
}

pub fn input_int() -> isize {
    let mut buffer = String::new();
    std::io::stdin()
        .read_line(&mut buffer)
        .unwrap();

    return buffer.trim().parse().unwrap();
}

pub fn input_matrix_int() {

}

pub fn input_str() {

}

pub fn input_char() {

}

pub fn input_arr_str() {

}

pub fn input_float() {

}

pub fn input_float_arr() {

}
